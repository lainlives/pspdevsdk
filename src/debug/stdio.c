/*
 * PSP Software Development Kit - https://github.com/pspdev
 * -----------------------------------------------------------------------
 * Licensed under the BSD license, see LICENSE in PSPSDK root for details.
 *
 * stdio.c - Debug functions to enable stdout and stderr handlers
 *
 * Copyright (c) 2005 Marcus R. Brown <mrbrown@ocgnet.org>
 * Copyright (c) 2005 James Forshaw <tyranid@gmail.com>
 * Copyright (c) 2005 John Kelley <ps2dev@kelley.ca>
 *
 */
#include <pspkernel.h>
#include <pspdebug.h>
#include <unistd.h>

#define dbgprintf pspDebugScreenPrintf

static int g_initialised = 0;
static SceDebugInputHandler g_stdin_handler = NULL;
static SceDebugPrintHandler g_stdout_handler = NULL;
static SceDebugPrintHandler g_stderr_handler = NULL;
static SceUID g_in_sema = 0;
/* Probably stdout and stderr should not be guarded by the same mutex */
static SceUID g_out_sema = 0;

static int io_init(SceIoDrvArg *arg)
{
	return 0;
}

static int io_exit(SceIoDrvArg *arg)
{
	return 0;
}

static int io_open(SceIoDrvFileArg *arg, char *file, int mode, SceMode mask)
{
	if((arg->fs_num != STDIN_FILENO) && (arg->fs_num != STDOUT_FILENO) && (arg->fs_num != STDERR_FILENO))
	{
		return SCE_KERNEL_ERROR_NOFILE;
	}

	return 0;
}

static int io_close(SceIoDrvFileArg *arg)
{
	return 0;
}

static int io_read(SceIoDrvFileArg *arg, char *data, int len)
{
	int ret = 0;

	(void) sceKernelWaitSema(g_in_sema, 1, 0);
	if((arg->fs_num == STDIN_FILENO) && (g_stdin_handler != NULL))
	{
		ret = g_stdin_handler(data, len);
	}
	(void) sceKernelSignalSema(g_in_sema, 1);

	return ret;
}

static int io_write(SceIoDrvFileArg *arg, const char *data, int len)
{
	int ret = 0;

	(void) sceKernelWaitSema(g_out_sema, 1, 0);
	if((arg->fs_num == STDOUT_FILENO) && (g_stdout_handler != NULL))
	{
		ret = g_stdout_handler(data, len);
	}
	else if((arg->fs_num == STDERR_FILENO) && (g_stderr_handler != NULL))
	{
		ret = g_stderr_handler(data, len);
	}
	(void) sceKernelSignalSema(g_out_sema, 1);

	return ret;
}

static SceOff io_lseek(SceIoDrvFileArg *arg, SceOff ofs, int whence)
{
	return 0;
}

static int io_ioctl(SceIoDrvFileArg *arg, unsigned int cmd, void *indata, int inlen, void *outdata, int outlen)
{
	return 0;
}

static int io_remove(SceIoDrvFileArg *arg, const char *name)
{
	return 0;
}

static int io_mkdir(SceIoDrvFileArg *arg, const char *name, SceMode mode)
{
	return 0;
}

static int io_rmdir(SceIoDrvFileArg *arg, const char *name)
{
	return 0;
}

static int io_dopen(SceIoDrvFileArg *arg, const char *dir)
{
	return 0;
}

static int io_dclose(SceIoDrvFileArg *arg)
{
	return 0;
}

static int io_dread(SceIoDrvFileArg *arg, SceIoDirent *dir)
{
	return 0;
}

static int io_getstat(SceIoDrvFileArg *arg, const char *file, SceIoStat *stat)
{
	return 0;
}

static int io_chstat(SceIoDrvFileArg *arg, const char *file, SceIoStat *stat, int bits)
{
	return 0;
}

static int io_rename(SceIoDrvFileArg *arg, const char *oldname, const char *newname)
{
	return 0;
}

static int io_chdir(SceIoDrvFileArg *arg, const char *dir)
{
	return 0;
}

static int io_mount(SceIoDrvFileArg *arg)
{
	return 0;
}

static int io_umount(SceIoDrvFileArg *arg)
{
	return 0;
}

static int io_devctl(SceIoDrvFileArg *arg, const char *devname, unsigned int cmd, void *indata, int inlen, void *outdata, int outlen)
{
	return 0;
}

static int io_unknown(SceIoDrvFileArg *arg)
{
	return 0;
}

static SceIoDrvFuncs tty_funcs = 
{
	io_init,
	io_exit,
	io_open,
	io_close,
	io_read,
	io_write,
	io_lseek,
	io_ioctl,
	io_remove,
	io_mkdir,
	io_rmdir,
	io_dopen,
	io_dclose,
	io_dread,
	io_getstat,
	io_chstat,
	io_rename,
	io_chdir,
	io_mount,
	io_umount,
	io_devctl,
	io_unknown,
};

static SceIoDrv tty_driver = 
{
	"tty", 0x10, 0x800, "TTY", &tty_funcs
};

static int tty_init(void)
{
	int ret;
	(void) sceIoDelDrv("tty"); /* Ignore error */
	ret = sceIoAddDrv(&tty_driver);
	if(ret < 0)
	{
		return ret;
	}

	g_in_sema = sceKernelCreateSema("TtyInMutex", 0, 1, 1, NULL);
	if(g_in_sema < 0)
	{
		return g_in_sema;
	}

	g_out_sema = sceKernelCreateSema("TtyOutMutex", 0, 1, 1, NULL);
	if(g_out_sema < 0)
	{
		return g_out_sema;
	}

	ret = sceIoReopen("tty0:", PSP_O_RDONLY, 0777, sceKernelStdin());
	if(ret < 0)
	{
		return ret;
	}

	ret = sceKernelStdoutReopen("tty1:", PSP_O_WRONLY, 0777);
	if(ret < 0)
	{
		return ret;
	}

	ret = sceKernelStderrReopen("tty2:", PSP_O_WRONLY, 0777);
	if(ret < 0)
	{
		return ret;
	}

	g_initialised = 1;

	return 0;
}

int pspDebugInstallStdinHandler(SceDebugInputHandler handler)
{
	if(g_initialised == 0)
	{
		int ret;
		ret = tty_init();
		if(ret < 0)
		{
			return ret;
		}
	}

	g_stdin_handler = handler;

	return 0;
}

int pspDebugInstallStdoutHandler(SceDebugPrintHandler handler)
{
	if(g_initialised == 0)
	{
		int ret;
		ret = tty_init();
		if(ret < 0)
		{
			return ret;
		}
	}

	g_stdout_handler = handler;

	return 0;
}

int pspDebugInstallStderrHandler(SceDebugPrintHandler handler)
{
	if(g_initialised == 0)
	{
		int ret;
		ret = tty_init();
		if(ret < 0)
		{
			return ret;
		}
	}

	g_stderr_handler = handler;

	return 0;
}

