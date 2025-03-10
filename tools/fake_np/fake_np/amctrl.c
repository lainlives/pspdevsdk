
/*
 *  amctrl.c  -- Reverse engineering of amctrl.prx
 *               writen by tpu.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "kirk_engine.h"
#include "psp_headers.h"
#include "amctrl.h"


/*************************************************************/

static u8 loc_1CD4[16] = {0xE3, 0x50, 0xED, 0x1D, 0x91, 0x0A, 0x1F, 0xD0, 0x29, 0xBB, 0x1C, 0x3E, 0xF3, 0x40, 0x77, 0xFB};
static u8 loc_1CE4[16] = {0x13, 0x5F, 0xA4, 0x7C, 0xAB, 0x39, 0x5B, 0xA4, 0x76, 0xB8, 0xCC, 0xA9, 0x8F, 0x3A, 0x04, 0x45};
static u8 loc_1CF4[16] = {0x67, 0x8D, 0x7F, 0xA3, 0x2A, 0x9C, 0xA0, 0xD1, 0x50, 0x8A, 0xD8, 0x38, 0x5E, 0x4B, 0x01, 0x7E};

static u8 kirk_buf[0x0814]; // 1DC0 1DD4

/*************************************************************/

static int kirk4(u8 *buf, int size, int type)
{
	int retv;
	u32 *header = (u32*)buf;

	header[0] = 4;
	header[1] = 0;
	header[2] = 0;
	header[3] = type;
	header[4] = size;

	retv = sceUtilsBufferCopyWithRange(buf, size+0x14, buf, size, 4);
	if(retv)
		return 0x80510311;

	return 0;
}

static int kirk7(u8 *buf, int size, int type)
{
	int retv;
	u32 *header = (u32*)buf;

	header[0] = 5;
	header[1] = 0;
	header[2] = 0;
	header[3] = type;
	header[4] = size;

	retv = sceUtilsBufferCopyWithRange(buf, size+0x14, buf, size, 7);
	if(retv)
		return 0x80510311;

	return 0;
}

static int kirk5(u8 *buf, int size)
{
	int retv;
	u32 *header = (u32*)buf;

	header[0] = 4;
	header[1] = 0;
	header[2] = 0;
	header[3] = 0x0100;
	header[4] = size;

	retv = sceUtilsBufferCopyWithRange(buf, size+0x14, buf, size, 5);
	if(retv)
		return 0x80510312;

	return 0;
}

static int kirk8(u8 *buf, int size)
{
	int retv;
	u32 *header = (u32*)buf;

	header[0] = 5;
	header[1] = 0;
	header[2] = 0;
	header[3] = 0x0100;
	header[4] = size;

	retv = sceUtilsBufferCopyWithRange(buf, size+0x14, buf, size, 8);
	if(retv)
		return 0x80510312;

	return 0;
}

static int kirk14(u8 *buf)
{
	int retv;

	retv = sceUtilsBufferCopyWithRange(buf, 0x14, 0, 0, 14);
	if(retv)
		return 0x80510315;

	return 0;
}

/*************************************************************/

// Called by sceDrmBBMacUpdate
// encrypt_buf
static int sub_158(u8 *buf, int size, u8 *key, int key_type)
{
	int i, retv;

	for(i=0; i<16; i++){
		buf[0x14+i] ^= key[i];
	}

	retv = kirk4(buf, size, key_type);
	if(retv)
		return retv;

	// copy last 16 bytes to keys
	memcpy(key, buf+size+4, 16);

	return 0;
}


// type:
//      2: use fuse id
//      3: use fixed id
int sceDrmBBMacInit(MAC_KEY *mkey, int type)
{
	mkey->type = type;
	mkey->pad_size = 0;

	memset(mkey->key, 0, 16);
	memset(mkey->pad, 0, 16);

	return 0;
}

int sceDrmBBMacUpdate(MAC_KEY *mkey, u8 *buf, int size)
{
	int retv, ksize, p, type;
	u8 *kbuf;

	if(mkey->pad_size>16){
		retv = 0x80510302;
		goto _exit;
	}

	if(mkey->pad_size+size<=16){
		memcpy(mkey->pad+mkey->pad_size, buf, size);
		mkey->pad_size += size;
		retv = 0;
	}else{
		kbuf = kirk_buf+0x14;
		// copy pad data first
		memcpy(kbuf, mkey->pad, mkey->pad_size);

		p = mkey->pad_size;

		mkey->pad_size += size;
		mkey->pad_size &= 0x0f;
		if(mkey->pad_size==0)
			mkey->pad_size = 16;

		size -= mkey->pad_size;
		// save last data to pad buf
		memcpy(mkey->pad, buf+size, mkey->pad_size);

		type = (mkey->type==2)? 0x3A : 0x38;

		while(size){
			ksize = (size+p>=0x0800)? 0x0800 : size+p;
			memcpy(kbuf+p, buf, ksize-p);
			retv = sub_158(kirk_buf, ksize, mkey->key, type);
			if(retv)
				goto _exit;
			size -= (ksize-p);
			buf += ksize-p;
			p = 0;
		}
	}

_exit:
	return retv;

}

int sceDrmBBMacFinal(MAC_KEY *mkey, u8 *buf, u8 *vkey)
{
	int i, retv, type;
	u8 *kbuf, tmp[16], tmp1[16];
	u32 t0, v0, v1;

	if(mkey->pad_size>16)
		return 0x80510302;

	type = (mkey->type==2)? 0x3A : 0x38;
	kbuf = kirk_buf+0x14;

	memset(kbuf, 0, 16);
	retv = kirk4(kirk_buf, 16, type);
	if(retv)
		goto _exit;
	memcpy(tmp, kbuf, 16);

	// left shift tmp 1 bit
	t0 = (tmp[0]&0x80)? 0x87 : 0;
	for(i=0; i<15; i++){
		v1 = tmp[i+0];
		v0 = tmp[i+1];
		v1 <<= 1;
		v0 >>= 7;
		v0 |= v1;
		tmp[i+0] = v0;
	}
	v0 = tmp[15];
	v0 <<= 1;
	v0 ^= t0;
	tmp[15] = v0;

	// padding remain data
	if(mkey->pad_size<16){
		// left shift tmp 1 bit
		t0 = (tmp[0]&0x80)? 0x87 : 0;
		for(i=0; i<15; i++){
			v1 = tmp[i+0];
			v0 = tmp[i+1];
			v1 <<= 1;
			v0 >>= 7;
			v0 |= v1;
			tmp[i+0] = v0;
		}
		v0 = tmp[15];
		v0 <<= 1;
		v0 ^= t0;
		tmp[15] = t0;

		mkey->pad[mkey->pad_size] = 0x80;
		if(mkey->pad_size+1<16)
			memset(mkey->pad+mkey->pad_size+1, 0, 16-mkey->pad_size-1);
	}

	for(i=0; i<16; i++){
		mkey->pad[i] ^= tmp[i];
	}

	memcpy(kbuf, mkey->pad, 16);
	memcpy(tmp1, mkey->key, 16);

	retv = sub_158(kirk_buf, 0x10, tmp1, type);
	if(retv)
		return retv;

	for(i=0; i<0x10; i++){
		tmp1[i] ^= loc_1CD4[i];
	}

	if(mkey->type==2){
		memcpy(kbuf, tmp1, 16);

		retv = kirk5(kirk_buf, 0x10);
		if(retv)
			goto _exit;

		retv = kirk4(kirk_buf, 0x10, type);
		if(retv)
			goto _exit;

		memcpy(tmp1, kbuf, 16);
	}

	if(vkey){
		for(i=0; i<0x10; i++){
			tmp1[i] ^= vkey[i];
		}
		memcpy(kbuf, tmp1, 16);

		retv = kirk4(kirk_buf, 0x10, type);
		if(retv)
			goto _exit;

		memcpy(tmp1, kbuf, 16);
	}

	memcpy(buf, tmp1, 16);

	memset(mkey->key, 0, 16);
	memset(mkey->pad, 0, 16);

	mkey->pad_size = 0;
	mkey->type = 0;
	retv = 0;

_exit:
	return retv;
}

int sceDrmBBMacFinal2(MAC_KEY *mkey, u8 *out, u8 *vkey)
{
	int i, retv, type;
	u8 *kbuf, tmp[16];

	type = mkey->type;
	retv = sceDrmBBMacFinal(mkey, tmp, vkey);
	if(retv)
		return retv;

	kbuf = kirk_buf+0x14;

	if(type==3){
		memcpy(kbuf, out, 0x10);
		kirk7(kirk_buf, 0x10, 0x63);
	}else{
		memcpy(kirk_buf, out, 0x10);
	}

	retv = 0;
	for(i=0; i<0x10; i++){
		if(kirk_buf[i]!=tmp[i]){
			retv = 0x80510300;
			break;
		}
	}

	return retv;
}

int bbmac_forge(MAC_KEY *mkey, u8 *bbmac, u8 *vkey, u8 *buf)
{
	int i, retv, type;
	u8 *kbuf, tmp[16], tmp1[16];
	u32 t0, v0, v1;

	if(mkey->pad_size>16)
		return 0x80510302;

	type = (mkey->type==2)? 0x3A : 0x38;
	kbuf = kirk_buf+0x14;

	memset(kbuf, 0, 16);
	retv = kirk4(kirk_buf, 16, type);
	if(retv)
		return retv;
	memcpy(tmp, kbuf, 16);

	// left shift tmp 1 bit
	t0 = (tmp[0]&0x80)? 0x87 : 0;
	for(i=0; i<15; i++){
		v1 = tmp[i+0];
		v0 = tmp[i+1];
		v1 <<= 1;
		v0 >>= 7;
		v0 |= v1;
		tmp[i+0] = v0;
	}
	v0 = tmp[15];
	v0 <<= 1;
	v0 ^= t0;
	tmp[15] = v0;

	// padding remain data
	if(mkey->pad_size<16){
		// left shift tmp 1 bit
		t0 = (tmp[0]&0x80)? 0x87 : 0;
		for(i=0; i<15; i++){
			v1 = tmp[i+0];
			v0 = tmp[i+1];
			v1 <<= 1;
			v0 >>= 7;
			v0 |= v1;
			tmp[i+0] = v0;
		}
		v0 = tmp[15];
		v0 <<= 1;
		v0 ^= t0;
		tmp[15] = t0;

		mkey->pad[mkey->pad_size] = 0x80;
		if(mkey->pad_size+1<16)
			memset(mkey->pad+mkey->pad_size+1, 0, 16-mkey->pad_size-1);
	}

	for(i=0; i<16; i++){
		mkey->pad[i] ^= tmp[i];
	}
	for(i=0; i<0x10; i++){
		mkey->pad[i] ^= mkey->key[i];
	}

	// reverse order
	memcpy(kbuf, bbmac, 0x10);
	kirk7(kirk_buf, 0x10, 0x63);

	memcpy(kbuf, kirk_buf, 0x10);
	kirk7(kirk_buf, 0x10, type);

	memcpy(tmp1, kirk_buf, 0x10);
	for(i=0; i<0x10; i++){
		tmp1[i] ^= vkey[i];
	}
	for(i=0; i<0x10; i++){
		tmp1[i] ^= loc_1CD4[i];
	}

	memcpy(kbuf, tmp1, 0x10);
	kirk7(kirk_buf, 0x10, type);

	memcpy(tmp1, kirk_buf, 0x10);
	for(i=0; i<16; i++){
		mkey->pad[i] ^= tmp1[i];
	}

	for(i=0; i<16; i++){
		buf[i] ^= mkey->pad[i];
	}

	return 0;
}



/*************************************************************/

static int sub_1F8(u8 *buf, int size, u8 *key, int key_type)
{
	int i, retv;
	u8 tmp[16];

	// copy last 16 bytes to tmp
	memcpy(tmp, buf+size+0x14-16, 16);

	retv = kirk7(buf, size, key_type);
	if(retv)
		return retv;

	for(i=0; i<16; i++){
		buf[i] ^= key[i];
	}

	// copy last 16 bytes to keys
	memcpy(key, tmp, 16);

	return 0;
}


static int sub_428(u8 *kbuf, u8 *dbuf, int size, CIPHER_KEY *ckey)
{
	int i, retv;
	u8 tmp1[16], tmp2[16];

	memcpy(kbuf+0x14, ckey->key, 16);

	for(i=0; i<16; i++){
		kbuf[0x14+i] ^= loc_1CF4[i];
	}
	
	if(ckey->type==2)
		retv = kirk8(kbuf, 16);
	else
		retv = kirk7(kbuf, 16, 0x39);
	if(retv)
		return retv;

	for(i=0; i<16; i++){
		kbuf[i] ^= loc_1CE4[i];
	}

	memcpy(tmp2, kbuf, 0x10);

	if(ckey->seed==1){
		memset(tmp1, 0, 0x10);
	}else{
		memcpy(tmp1, tmp2, 0x10);
		*(u32*)(tmp1+0x0c) = ckey->seed-1;
	}

	for(i=0; i<size; i+=16){
		memcpy(kbuf+0x14+i, tmp2, 12);
		*(u32*)(kbuf+0x14+i+12) = ckey->seed;
		ckey->seed += 1;
	}

	retv = sub_1F8(kbuf, size, tmp1, 0x63);
	if(retv)
		return retv;

	for(i=0; i<size; i++){
		dbuf[i] ^= kbuf[i];
	}

	return 0;
}



// type: 1 use fixed key
//       2 use fuse id
// mode: 1 for encrypt
//       2 for decrypt
int sceDrmBBCipherInit(CIPHER_KEY *ckey, int type, int mode, u8 *header_key, u8 *version_key, u32 seed)
{
	int i, retv;
	u8 *kbuf;

	kbuf = kirk_buf+0x14;
	ckey->type = type;
	if(mode==2){
		ckey->seed = seed+1;
		for(i=0; i<16; i++){
			ckey->key[i] = header_key[i];
		}
		if(version_key){
			for(i=0; i<16; i++){
				ckey->key[i] ^= version_key[i];
			}
		}
		retv = 0;
	}else if(mode==1){
		ckey->seed = 1;
		retv = kirk14(kirk_buf);
		if(retv)
			return retv;

		memcpy(kbuf, kirk_buf, 0x10);
		memset(kbuf+0x0c, 0, 4);

		if(ckey->type==2){
			for(i=0; i<16; i++){
				kbuf[i] ^= loc_1CE4[i];
			}
			retv = kirk5(kirk_buf, 0x10);
			for(i=0; i<16; i++){
				kbuf[i] ^= loc_1CF4[i];
			}
		}else{
			for(i=0; i<16; i++){
				kbuf[i] ^= loc_1CE4[i];
			}
			retv = kirk4(kirk_buf, 0x10, 0x39);
			for(i=0; i<16; i++){
				kbuf[i] ^= loc_1CF4[i];
			}
		}
		if(retv)
			return retv;

		memcpy(ckey->key, kbuf, 0x10);
		memcpy(header_key, kbuf, 0x10);

		if(version_key){
			for(i=0; i<16; i++){
				ckey->key[i] ^= version_key[i];
			}
		}
	}else{
		retv = 0;
	}

	return retv;
}

int sceDrmBBCipherUpdate(CIPHER_KEY *ckey, u8 *data, int size)
{
	int p, retv;

	p = 0;
	while(size>0){
		retv = sub_428(kirk_buf, data+p, 0x0800, ckey);
		if(retv)
			break;
		size -= 0x0800;
		p += 0x0800;
	}

	return retv;
}

int sceDrmBBCipherFinal(CIPHER_KEY *ckey)
{
	memset(ckey->key, 0, 16);
	ckey->type = 0;
	ckey->seed = 0;

	return 0;
}


