# Makefile.in generated by automake 1.16.5 from Makefile.am.
# src/net/Makefile.  Generated from Makefile.in by configure.

# Copyright (C) 1994-2021 Free Software Foundation, Inc.

# This Makefile.in is free software; the Free Software Foundation
# gives unlimited permission to copy and/or distribute it,
# with or without modifications, as long as this notice is preserved.

# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY, to the extent permitted by law; without
# even the implied warranty of MERCHANTABILITY or FITNESS FOR A
# PARTICULAR PURPOSE.





am__is_gnu_make = { \
  if test -z '$(MAKELEVEL)'; then \
    false; \
  elif test -n '$(MAKE_HOST)'; then \
    true; \
  elif test -n '$(MAKE_VERSION)' && test -n '$(CURDIR)'; then \
    true; \
  else \
    false; \
  fi; \
}
am__make_running_with_option = \
  case $${target_option-} in \
      ?) ;; \
      *) echo "am__make_running_with_option: internal error: invalid" \
              "target option '$${target_option-}' specified" >&2; \
         exit 1;; \
  esac; \
  has_opt=no; \
  sane_makeflags=$$MAKEFLAGS; \
  if $(am__is_gnu_make); then \
    sane_makeflags=$$MFLAGS; \
  else \
    case $$MAKEFLAGS in \
      *\\[\ \	]*) \
        bs=\\; \
        sane_makeflags=`printf '%s\n' "$$MAKEFLAGS" \
          | sed "s/$$bs$$bs[$$bs $$bs	]*//g"`;; \
    esac; \
  fi; \
  skip_next=no; \
  strip_trailopt () \
  { \
    flg=`printf '%s\n' "$$flg" | sed "s/$$1.*$$//"`; \
  }; \
  for flg in $$sane_makeflags; do \
    test $$skip_next = yes && { skip_next=no; continue; }; \
    case $$flg in \
      *=*|--*) continue;; \
        -*I) strip_trailopt 'I'; skip_next=yes;; \
      -*I?*) strip_trailopt 'I';; \
        -*O) strip_trailopt 'O'; skip_next=yes;; \
      -*O?*) strip_trailopt 'O';; \
        -*l) strip_trailopt 'l'; skip_next=yes;; \
      -*l?*) strip_trailopt 'l';; \
      -[dEDm]) skip_next=yes;; \
      -[JT]) skip_next=yes;; \
    esac; \
    case $$flg in \
      *$$target_option*) has_opt=yes; break;; \
    esac; \
  done; \
  test $$has_opt = yes
am__make_dryrun = (target_option=n; $(am__make_running_with_option))
am__make_keepgoing = (target_option=k; $(am__make_running_with_option))
pkgdatadir = $(datadir)/pspsdk
pkgincludedir = $(includedir)/pspsdk
pkglibdir = $(libdir)/pspsdk
pkglibexecdir = $(libexecdir)/pspsdk
am__cd = CDPATH="$${ZSH_VERSION+.}$(PATH_SEPARATOR)" && cd
install_sh_DATA = $(install_sh) -c -m 644
install_sh_PROGRAM = $(install_sh) -c
install_sh_SCRIPT = $(install_sh) -c
INSTALL_HEADER = $(INSTALL_DATA)
transform = $(program_transform_name)
NORMAL_INSTALL = :
PRE_INSTALL = :
POST_INSTALL = :
NORMAL_UNINSTALL = :
PRE_UNINSTALL = :
POST_UNINSTALL = :
subdir = src/net
ACLOCAL_M4 = $(top_srcdir)/aclocal.m4
am__aclocal_m4_deps = $(top_srcdir)/m4/ax_prog_doxygen.m4 \
	$(top_srcdir)/m4/pspdev.m4 $(top_srcdir)/configure.ac
am__configure_deps = $(am__aclocal_m4_deps) $(CONFIGURE_DEPENDENCIES) \
	$(ACLOCAL_M4)
DIST_COMMON = $(srcdir)/Makefile.am $(libpspnetinclude_HEADERS) \
	$(am__DIST_COMMON)
mkinstalldirs = $(install_sh) -d
CONFIG_HEADER = $(top_builddir)/config.h
CONFIG_CLEAN_FILES =
CONFIG_CLEAN_VPATH_FILES =
am__vpath_adj_setup = srcdirstrip=`echo "$(srcdir)" | sed 's|.|.|g'`;
am__vpath_adj = case $$p in \
    $(srcdir)/*) f=`echo "$$p" | sed "s|^$$srcdirstrip/||"`;; \
    *) f=$$p;; \
  esac;
am__strip_dir = f=`echo $$p | sed -e 's|^.*/||'`;
am__install_max = 40
am__nobase_strip_setup = \
  srcdirstrip=`echo "$(srcdir)" | sed 's/[].[^$$\\*|]/\\\\&/g'`
am__nobase_strip = \
  for p in $$list; do echo "$$p"; done | sed -e "s|$$srcdirstrip/||"
am__nobase_list = $(am__nobase_strip_setup); \
  for p in $$list; do echo "$$p $$p"; done | \
  sed "s| $$srcdirstrip/| |;"' / .*\//!s/ .*/ ./; s,\( .*\)/[^/]*$$,\1,' | \
  $(AWK) 'BEGIN { files["."] = "" } { files[$$2] = files[$$2] " " $$1; \
    if (++n[$$2] == $(am__install_max)) \
      { print $$2, files[$$2]; n[$$2] = 0; files[$$2] = "" } } \
    END { for (dir in files) print dir, files[dir] }'
am__base_list = \
  sed '$$!N;$$!N;$$!N;$$!N;$$!N;$$!N;$$!N;s/\n/ /g' | \
  sed '$$!N;$$!N;$$!N;$$!N;s/\n/ /g'
am__uninstall_files_from_dir = { \
  test -z "$$files" \
    || { test ! -d "$$dir" && test ! -f "$$dir" && test ! -r "$$dir"; } \
    || { echo " ( cd '$$dir' && rm -f" $$files ")"; \
         $(am__cd) "$$dir" && rm -f $$files; }; \
  }
am__installdirs = "$(DESTDIR)$(libdir)" \
	"$(DESTDIR)$(libpspnetincludedir)"
LIBRARIES = $(lib_LIBRARIES)
ARFLAGS = cru
AM_V_AR = $(am__v_AR_$(V))
am__v_AR_ = $(am__v_AR_$(AM_DEFAULT_VERBOSITY))
am__v_AR_0 = @echo "  AR      " $@;
am__v_AR_1 = 
libpspnet_a_AR = $(AR) $(ARFLAGS)
libpspnet_a_DEPENDENCIES = $(NET_OBJS) $(NETLIB_OBJS)
am_libpspnet_a_OBJECTS = sceNet.$(OBJEXT) sceNet_lib.$(OBJEXT)
libpspnet_a_OBJECTS = $(am_libpspnet_a_OBJECTS)
libpspnet_adhoc_a_AR = $(AR) $(ARFLAGS)
libpspnet_adhoc_a_DEPENDENCIES = $(NET_ADHOC_OBJS)
am_libpspnet_adhoc_a_OBJECTS = sceNetAdhoc.$(OBJEXT)
libpspnet_adhoc_a_OBJECTS = $(am_libpspnet_adhoc_a_OBJECTS)
libpspnet_adhocctl_a_AR = $(AR) $(ARFLAGS)
libpspnet_adhocctl_a_DEPENDENCIES = $(NET_ADHOCCTL_OBJS)
am_libpspnet_adhocctl_a_OBJECTS = sceNetAdhocctl.$(OBJEXT)
libpspnet_adhocctl_a_OBJECTS = $(am_libpspnet_adhocctl_a_OBJECTS)
libpspnet_adhocmatching_a_AR = $(AR) $(ARFLAGS)
libpspnet_adhocmatching_a_DEPENDENCIES = $(NET_ADHOCMATCHING_OBJS)
am_libpspnet_adhocmatching_a_OBJECTS = sceNetAdhocMatching.$(OBJEXT)
libpspnet_adhocmatching_a_OBJECTS =  \
	$(am_libpspnet_adhocmatching_a_OBJECTS)
libpspnet_apctl_a_AR = $(AR) $(ARFLAGS)
libpspnet_apctl_a_DEPENDENCIES = $(NET_APCTL_OBJS)
am_libpspnet_apctl_a_OBJECTS = sceNetApctl.$(OBJEXT)
libpspnet_apctl_a_OBJECTS = $(am_libpspnet_apctl_a_OBJECTS)
libpspnet_inet_a_AR = $(AR) $(ARFLAGS)
libpspnet_inet_a_DEPENDENCIES = $(NET_INET_OBJS)
am_libpspnet_inet_a_OBJECTS = sceNetInet.$(OBJEXT)
libpspnet_inet_a_OBJECTS = $(am_libpspnet_inet_a_OBJECTS)
libpspnet_resolver_a_AR = $(AR) $(ARFLAGS)
libpspnet_resolver_a_DEPENDENCIES = $(NET_RESOLVER_OBJS)
am_libpspnet_resolver_a_OBJECTS = sceNetResolver.$(OBJEXT)
libpspnet_resolver_a_OBJECTS = $(am_libpspnet_resolver_a_OBJECTS)
AM_V_P = $(am__v_P_$(V))
am__v_P_ = $(am__v_P_$(AM_DEFAULT_VERBOSITY))
am__v_P_0 = false
am__v_P_1 = :
AM_V_GEN = $(am__v_GEN_$(V))
am__v_GEN_ = $(am__v_GEN_$(AM_DEFAULT_VERBOSITY))
am__v_GEN_0 = @echo "  GEN     " $@;
am__v_GEN_1 = 
AM_V_at = $(am__v_at_$(V))
am__v_at_ = $(am__v_at_$(AM_DEFAULT_VERBOSITY))
am__v_at_0 = @
am__v_at_1 = 
DEFAULT_INCLUDES = -I. -I$(top_builddir)
depcomp = $(SHELL) $(top_srcdir)/depcomp
am__maybe_remake_depfiles = depfiles
am__depfiles_remade = ./$(DEPDIR)/sceNet.Po ./$(DEPDIR)/sceNetAdhoc.Po \
	./$(DEPDIR)/sceNetAdhocMatching.Po \
	./$(DEPDIR)/sceNetAdhocctl.Po ./$(DEPDIR)/sceNetApctl.Po \
	./$(DEPDIR)/sceNetInet.Po ./$(DEPDIR)/sceNetResolver.Po \
	./$(DEPDIR)/sceNet_lib.Po
am__mv = mv -f
CPPASCOMPILE = $(CCAS) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) \
	$(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CCASFLAGS) $(CCASFLAGS)
AM_V_CPPAS = $(am__v_CPPAS_$(V))
am__v_CPPAS_ = $(am__v_CPPAS_$(AM_DEFAULT_VERBOSITY))
am__v_CPPAS_0 = @echo "  CPPAS   " $@;
am__v_CPPAS_1 = 
COMPILE = $(CC) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) \
	$(CPPFLAGS) $(AM_CFLAGS) $(CFLAGS)
AM_V_CC = $(am__v_CC_$(V))
am__v_CC_ = $(am__v_CC_$(AM_DEFAULT_VERBOSITY))
am__v_CC_0 = @echo "  CC      " $@;
am__v_CC_1 = 
CCLD = $(CC)
LINK = $(CCLD) $(AM_CFLAGS) $(CFLAGS) $(AM_LDFLAGS) $(LDFLAGS) -o $@
AM_V_CCLD = $(am__v_CCLD_$(V))
am__v_CCLD_ = $(am__v_CCLD_$(AM_DEFAULT_VERBOSITY))
am__v_CCLD_0 = @echo "  CCLD    " $@;
am__v_CCLD_1 = 
SOURCES = $(libpspnet_a_SOURCES) $(libpspnet_adhoc_a_SOURCES) \
	$(libpspnet_adhocctl_a_SOURCES) \
	$(libpspnet_adhocmatching_a_SOURCES) \
	$(libpspnet_apctl_a_SOURCES) $(libpspnet_inet_a_SOURCES) \
	$(libpspnet_resolver_a_SOURCES)
DIST_SOURCES = $(libpspnet_a_SOURCES) $(libpspnet_adhoc_a_SOURCES) \
	$(libpspnet_adhocctl_a_SOURCES) \
	$(libpspnet_adhocmatching_a_SOURCES) \
	$(libpspnet_apctl_a_SOURCES) $(libpspnet_inet_a_SOURCES) \
	$(libpspnet_resolver_a_SOURCES)
am__can_run_installinfo = \
  case $$AM_UPDATE_INFO_DIR in \
    n|no|NO) false;; \
    *) (install-info --version) >/dev/null 2>&1;; \
  esac
HEADERS = $(libpspnetinclude_HEADERS)
am__tagged_files = $(HEADERS) $(SOURCES) $(TAGS_FILES) $(LISP)
# Read a list of newline-separated strings from the standard input,
# and print each of them once, without duplicates.  Input order is
# *not* preserved.
am__uniquify_input = $(AWK) '\
  BEGIN { nonempty = 0; } \
  { items[$$0] = 1; nonempty = 1; } \
  END { if (nonempty) { for (i in items) print i; }; } \
'
# Make sure the list of sources is unique.  This is necessary because,
# e.g., the same source file might be shared among _SOURCES variables
# for different programs/libraries.
am__define_uniq_tagged_files = \
  list='$(am__tagged_files)'; \
  unique=`for i in $$list; do \
    if test -f "$$i"; then echo $$i; else echo $(srcdir)/$$i; fi; \
  done | $(am__uniquify_input)`
am__DIST_COMMON = $(srcdir)/Makefile.in $(top_srcdir)/depcomp
DISTFILES = $(DIST_COMMON) $(DIST_SOURCES) $(TEXINFOS) $(EXTRA_DIST)
ACLOCAL = ${SHELL} '/home/ultros/Desktop/psp/pspsdk-mine/missing' aclocal-1.16
AMTAR = $${TAR-tar}
AM_DEFAULT_VERBOSITY = 0
AUTOCONF = ${SHELL} '/home/ultros/Desktop/psp/pspsdk-mine/missing' autoconf
AUTOHEADER = ${SHELL} '/home/ultros/Desktop/psp/pspsdk-mine/missing' autoheader
AUTOMAKE = ${SHELL} '/home/ultros/Desktop/psp/pspsdk-mine/missing' automake-1.16
AWK = mawk
CC = psp-gcc
CCAS = $(CC)
CCASDEPMODE = depmode=gcc3
CCASFLAGS = $(CFLAGS)
CCDEPMODE = depmode=gcc3
CFLAGS = -g -O2 -mno-gpopt -Wall -Werror -D_PSP_FW_VERSION=600
CPPFLAGS = -I$(top_srcdir)/src/base -I$(top_srcdir)/src/kernel
CSCOPE = cscope
CTAGS = ctags
CXX = g++
CXXDEPMODE = depmode=gcc3
CXXFLAGS = -g -O2
CYGPATH_W = echo
DEFS = -DHAVE_CONFIG_H
DEPDIR = .deps
DOXYGEN_PAPER_SIZE = 
DX_CONFIG = Doxyfile
DX_DOCDIR = doc
DX_DOT = 
DX_DOXYGEN = 
DX_DVIPS = 
DX_EGREP = 
DX_ENV =  SRCDIR='.' PROJECT='PSPSDK' VERSION='2025-01-26-ULTROS-MAGIC-SDK-FORK' HAVE_DOT='NO' GENERATE_MAN='NO' GENERATE_RTF='NO' GENERATE_XML='NO' GENERATE_HTMLHELP='NO' GENERATE_CHI='NO' GENERATE_HTML='NO' GENERATE_LATEX='NO'
DX_FLAG_chi = 0
DX_FLAG_chm = 0
DX_FLAG_doc = 0
DX_FLAG_dot = 0
DX_FLAG_html = 0
DX_FLAG_man = 0
DX_FLAG_pdf = 0
DX_FLAG_ps = 0
DX_FLAG_rtf = 0
DX_FLAG_xml = 0
DX_HHC = 
DX_LATEX = 
DX_MAKEINDEX = 
DX_PDFLATEX = 
DX_PERL = /usr/bin/perl
DX_PROJECT = PSPSDK
ECHO_C = 
ECHO_N = -n
ECHO_T = 
EGREP = /usr/bin/grep -E
ETAGS = etags
EXEEXT = 
GREP = /usr/bin/grep
INSTALL = /usr/bin/install -c
INSTALL_DATA = ${INSTALL} -m 644
INSTALL_PROGRAM = ${INSTALL}
INSTALL_SCRIPT = ${INSTALL}
INSTALL_STRIP_PROGRAM = $(install_sh) -c -s
LDFLAGS = 
LIBOBJS = 
LIBS = -lz 
LTLIBOBJS = 
MAKEINFO = ${SHELL} '/home/ultros/Desktop/psp/pspsdk-mine/missing' makeinfo
MKDIR_P = /usr/bin/mkdir -p
OBJEXT = o
PACKAGE = pspsdk
PACKAGE_BUGREPORT = https://github.com/pspdev/pspsdk/issues
PACKAGE_NAME = PSP Software Development Kit
PACKAGE_STRING = PSP Software Development Kit 2025-01-26-ULTROS-MAGIC-SDK-FORK
PACKAGE_TARNAME = pspsdk
PACKAGE_URL = https://pspdev.github.io/pspsdk
PACKAGE_VERSION = 2025-01-26-ULTROS-MAGIC-SDK-FORK
PATH_SEPARATOR = :
PSPDEV = /opt/pspdev
PSPDEV_BINDIR = /opt/pspdev/bin
PSPDEV_INCLUDEDIR = /opt/pspdev/psp/include
PSPDEV_LIBDIR = /opt/pspdev/psp/lib
PSPDEV_SHAREDIR = /opt/pspdev/psp/share
PSPSDK = /opt/pspdev/psp/sdk
PSPSDK_CFLAGS = -g -O2 -mno-gpopt -Wall -Werror -D_PSP_FW_VERSION=600
PSPSDK_CXXFLAGS = -g -O2 -mno-gpopt -Wall -Werror -D_PSP_FW_VERSION=600 -fno-exceptions -fno-rtti
PSPSDK_INCLUDEDIR = /opt/pspdev/psp/sdk/include
PSPSDK_LIBDIR = /opt/pspdev/psp/sdk/lib
PSP_AR = psp-ar
PSP_AS = psp-as
PSP_CC = psp-gcc
PSP_CXX = psp-g++
PSP_LD = psp-ld
PSP_NM = psp-nm
PSP_RANLIB = psp-ranlib
RANLIB = psp-ranlib
SET_MAKE = 
SHELL = /bin/bash
STRIP = 
VERSION = 2025-01-26-ULTROS-MAGIC-SDK-FORK
abs_builddir = /home/ultros/Desktop/psp/pspsdk-mine/src/net
abs_srcdir = /home/ultros/Desktop/psp/pspsdk-mine/src/net
abs_top_builddir = /home/ultros/Desktop/psp/pspsdk-mine
abs_top_srcdir = /home/ultros/Desktop/psp/pspsdk-mine
ac_ct_CC = gcc
ac_ct_CXX = g++
am__include = include
am__leading_dot = .
am__quote = 
am__tar = $${TAR-tar} chof - "$$tardir"
am__untar = $${TAR-tar} xf -
bindir = ${exec_prefix}/bin
build_alias = 
builddir = .
datadir = ${datarootdir}
datarootdir = ${prefix}/share
docdir = ${datarootdir}/doc/${PACKAGE_TARNAME}
dvidir = ${docdir}
exec_prefix = ${prefix}
host_alias = 
htmldir = ${docdir}
includedir = ${prefix}/include
infodir = ${datarootdir}/info
install_sh = ${SHELL} /home/ultros/Desktop/psp/pspsdk-mine/install-sh
libdir = /opt/pspdev/psp/sdk/lib
libexecdir = ${exec_prefix}/libexec
localedir = ${datarootdir}/locale
localstatedir = ${prefix}/var
mandir = ${datarootdir}/man
mkdir_p = $(MKDIR_P)
oldincludedir = /usr/include
pdfdir = ${docdir}
prefix = /opt/pspdev
program_transform_name = s,x,x,
psdir = ${docdir}
runstatedir = ${localstatedir}/run
sbindir = ${exec_prefix}/sbin
sharedstatedir = ${prefix}/com
srcdir = .
sysconfdir = ${prefix}/etc
target_alias = 
top_build_prefix = ../../
top_builddir = ../..
top_srcdir = ../..
AR = psp-ar
NET_OBJS = sceNet_0000.o sceNet_0001.o sceNet_0002.o sceNet_0003.o sceNet_0004.o sceNet_0005.o sceNet_0006.o sceNet_0007.o sceNet_0008.o 
NETLIB_OBJS = sceNet_lib_0000.o sceNet_lib_0001.o sceNet_lib_0002.o \
	sceNet_lib_0003.o sceNet_lib_0004.o sceNet_lib_0005.o \
	sceNet_lib_0006.o sceNet_lib_0007.o sceNet_lib_0008.o \
	sceNet_lib_0009.o sceNet_lib_0010.o sceNet_lib_0011.o \
	sceNet_lib_0012.o sceNet_lib_0013.o sceNet_lib_0014.o \
	sceNet_lib_0015.o sceNet_lib_0016.o sceNet_lib_0017.o \
	sceNet_lib_0018.o sceNet_lib_0019.o sceNet_lib_0020.o \
	sceNet_lib_0021.o sceNet_lib_0022.o sceNet_lib_0023.o \
	sceNet_lib_0024.o sceNet_lib_0025.o sceNet_lib_0026.o \
	sceNet_lib_0027.o sceNet_lib_0028.o sceNet_lib_0029.o \
	sceNet_lib_0030.o sceNet_lib_0031.o sceNet_lib_0032.o \
	sceNet_lib_0033.o sceNet_lib_0034.o sceNet_lib_0035.o \
	sceNet_lib_0036.o sceNet_lib_0037.o sceNet_lib_0038.o \
	sceNet_lib_0039.o sceNet_lib_0040.o sceNet_lib_0041.o \
	sceNet_lib_0042.o sceNet_lib_0043.o sceNet_lib_0044.o \
	sceNet_lib_0045.o sceNet_lib_0046.o sceNet_lib_0047.o \
	sceNet_lib_0048.o sceNet_lib_0049.o sceNet_lib_0050.o \
	sceNet_lib_0051.o sceNet_lib_0052.o sceNet_lib_0053.o \
	sceNet_lib_0054.o sceNet_lib_0055.o sceNet_lib_0056.o \
	sceNet_lib_0057.o sceNet_lib_0058.o sceNet_lib_0059.o \
	sceNet_lib_0060.o sceNet_lib_0061.o sceNet_lib_0062.o \
	sceNet_lib_0063.o sceNet_lib_0064.o sceNet_lib_0065.o \
	sceNet_lib_0066.o sceNet_lib_0067.o sceNet_lib_0068.o \
	sceNet_lib_0069.o sceNet_lib_0070.o sceNet_lib_0071.o \
	sceNet_lib_0072.o sceNet_lib_0073.o sceNet_lib_0074.o \
	sceNet_lib_0075.o sceNet_lib_0076.o sceNet_lib_0077.o \
	sceNet_lib_0078.o sceNet_lib_0079.o sceNet_lib_0080.o \
	sceNet_lib_0081.o sceNet_lib_0082.o sceNet_lib_0083.o \
	sceNet_lib_0084.o sceNet_lib_0085.o sceNet_lib_0086.o \
	sceNet_lib_0087.o sceNet_lib_0088.o sceNet_lib_0089.o \
	sceNet_lib_0090.o sceNet_lib_0091.o sceNet_lib_0092.o \
	sceNet_lib_0093.o sceNet_lib_0094.o sceNet_lib_0095.o \
	sceNet_lib_0096.o
NET_APCTL_OBJS = sceNetApctl_0000.o sceNetApctl_0001.o sceNetApctl_0002.o sceNetApctl_0003.o sceNetApctl_0004.o sceNetApctl_0005.o sceNetApctl_0006.o sceNetApctl_0007.o sceNetApctl_0008.o 
NET_INET_OBJS = sceNetInet_0000.o sceNetInet_0001.o sceNetInet_0002.o sceNetInet_0003.o sceNetInet_0004.o sceNetInet_0005.o sceNetInet_0006.o sceNetInet_0007.o sceNetInet_0008.o sceNetInet_0009.o sceNetInet_0010.o sceNetInet_0011.o sceNetInet_0012.o sceNetInet_0013.o sceNetInet_0014.o sceNetInet_0015.o sceNetInet_0016.o sceNetInet_0017.o sceNetInet_0018.o sceNetInet_0019.o sceNetInet_0020.o sceNetInet_0021.o sceNetInet_0022.o sceNetInet_0023.o sceNetInet_0024.o sceNetInet_0025.o sceNetInet_0026.o sceNetInet_0027.o sceNetInet_0028.o sceNetInet_0029.o sceNetInet_0030.o 
NET_RESOLVER_OBJS = sceNetResolver_0000.o sceNetResolver_0001.o sceNetResolver_0002.o sceNetResolver_0003.o sceNetResolver_0004.o sceNetResolver_0005.o sceNetResolver_0006.o sceNetResolver_0007.o 
NET_ADHOC_OBJS = sceNetAdhoc_0000.o sceNetAdhoc_0001.o sceNetAdhoc_0002.o sceNetAdhoc_0003.o sceNetAdhoc_0004.o sceNetAdhoc_0005.o sceNetAdhoc_0006.o sceNetAdhoc_0007.o sceNetAdhoc_0008.o sceNetAdhoc_0009.o sceNetAdhoc_0010.o sceNetAdhoc_0011.o sceNetAdhoc_0012.o sceNetAdhoc_0013.o sceNetAdhoc_0014.o sceNetAdhoc_0015.o sceNetAdhoc_0016.o sceNetAdhoc_0017.o sceNetAdhoc_0018.o sceNetAdhoc_0019.o sceNetAdhoc_0020.o sceNetAdhoc_0021.o sceNetAdhoc_0022.o sceNetAdhoc_0023.o sceNetAdhoc_0024.o sceNetAdhoc_0025.o 
NET_ADHOCCTL_OBJS = sceNetAdhocctl_0000.o sceNetAdhocctl_0001.o sceNetAdhocctl_0002.o sceNetAdhocctl_0003.o sceNetAdhocctl_0004.o sceNetAdhocctl_0005.o sceNetAdhocctl_0006.o sceNetAdhocctl_0007.o sceNetAdhocctl_0008.o sceNetAdhocctl_0009.o sceNetAdhocctl_0010.o sceNetAdhocctl_0011.o sceNetAdhocctl_0012.o sceNetAdhocctl_0013.o sceNetAdhocctl_0014.o sceNetAdhocctl_0015.o sceNetAdhocctl_0016.o sceNetAdhocctl_0017.o sceNetAdhocctl_0018.o sceNetAdhocctl_0019.o sceNetAdhocctl_0020.o sceNetAdhocctl_0021.o 
NET_ADHOCMATCHING_OBJS = sceNetAdhocMatching_0000.o sceNetAdhocMatching_0001.o sceNetAdhocMatching_0002.o sceNetAdhocMatching_0003.o sceNetAdhocMatching_0004.o sceNetAdhocMatching_0005.o sceNetAdhocMatching_0006.o sceNetAdhocMatching_0007.o sceNetAdhocMatching_0008.o sceNetAdhocMatching_0009.o sceNetAdhocMatching_0010.o sceNetAdhocMatching_0011.o sceNetAdhocMatching_0012.o sceNetAdhocMatching_0013.o sceNetAdhocMatching_0014.o sceNetAdhocMatching_0015.o sceNetAdhocMatching_0016.o
libpspnetincludedir = /opt/pspdev/psp/sdk/include
libpspnetinclude_HEADERS = pspnet.h			\
			   pspnet_apctl.h		\
			   pspnet_inet.h		\
			   pspnet_resolver.h	\
			   pspnet_adhoc.h		\
			   pspnet_adhocctl.h	\
			   pspnet_adhocmatching.h

lib_LIBRARIES = libpspnet.a			\
		libpspnet_apctl.a		\
		libpspnet_inet.a		\
		libpspnet_resolver.a	\
		libpspnet_adhoc.a		\
		libpspnet_adhocctl.a	\
		libpspnet_adhocmatching.a

libpspnet_a_SOURCES = sceNet.S sceNet_lib.S
libpspnet_a_LIBADD = $(NET_OBJS) $(NETLIB_OBJS)
libpspnet_apctl_a_SOURCES = sceNetApctl.S
libpspnet_apctl_a_LIBADD = $(NET_APCTL_OBJS)
libpspnet_inet_a_SOURCES = sceNetInet.S
libpspnet_inet_a_LIBADD = $(NET_INET_OBJS)
libpspnet_resolver_a_SOURCES = sceNetResolver.S
libpspnet_resolver_a_LIBADD = $(NET_RESOLVER_OBJS)
libpspnet_adhoc_a_SOURCES = sceNetAdhoc.S
libpspnet_adhoc_a_LIBADD = $(NET_ADHOC_OBJS)
libpspnet_adhocctl_a_SOURCES = sceNetAdhocctl.S
libpspnet_adhocctl_a_LIBADD = $(NET_ADHOCCTL_OBJS)
libpspnet_adhocmatching_a_SOURCES = sceNetAdhocMatching.S
libpspnet_adhocmatching_a_LIBADD = $(NET_ADHOCMATCHING_OBJS)
all: all-am

.SUFFIXES:
.SUFFIXES: .S .o .obj
$(srcdir)/Makefile.in:  $(srcdir)/Makefile.am  $(am__configure_deps)
	@for dep in $?; do \
	  case '$(am__configure_deps)' in \
	    *$$dep*) \
	      ( cd $(top_builddir) && $(MAKE) $(AM_MAKEFLAGS) am--refresh ) \
	        && { if test -f $@; then exit 0; else break; fi; }; \
	      exit 1;; \
	  esac; \
	done; \
	echo ' cd $(top_srcdir) && $(AUTOMAKE) --foreign src/net/Makefile'; \
	$(am__cd) $(top_srcdir) && \
	  $(AUTOMAKE) --foreign src/net/Makefile
Makefile: $(srcdir)/Makefile.in $(top_builddir)/config.status
	@case '$?' in \
	  *config.status*) \
	    cd $(top_builddir) && $(MAKE) $(AM_MAKEFLAGS) am--refresh;; \
	  *) \
	    echo ' cd $(top_builddir) && $(SHELL) ./config.status $(subdir)/$@ $(am__maybe_remake_depfiles)'; \
	    cd $(top_builddir) && $(SHELL) ./config.status $(subdir)/$@ $(am__maybe_remake_depfiles);; \
	esac;

$(top_builddir)/config.status: $(top_srcdir)/configure $(CONFIG_STATUS_DEPENDENCIES)
	cd $(top_builddir) && $(MAKE) $(AM_MAKEFLAGS) am--refresh

$(top_srcdir)/configure:  $(am__configure_deps)
	cd $(top_builddir) && $(MAKE) $(AM_MAKEFLAGS) am--refresh
$(ACLOCAL_M4):  $(am__aclocal_m4_deps)
	cd $(top_builddir) && $(MAKE) $(AM_MAKEFLAGS) am--refresh
$(am__aclocal_m4_deps):
install-libLIBRARIES: $(lib_LIBRARIES)
	@$(NORMAL_INSTALL)
	@list='$(lib_LIBRARIES)'; test -n "$(libdir)" || list=; \
	list2=; for p in $$list; do \
	  if test -f $$p; then \
	    list2="$$list2 $$p"; \
	  else :; fi; \
	done; \
	test -z "$$list2" || { \
	  echo " $(MKDIR_P) '$(DESTDIR)$(libdir)'"; \
	  $(MKDIR_P) "$(DESTDIR)$(libdir)" || exit 1; \
	  echo " $(INSTALL_DATA) $$list2 '$(DESTDIR)$(libdir)'"; \
	  $(INSTALL_DATA) $$list2 "$(DESTDIR)$(libdir)" || exit $$?; }
	@$(POST_INSTALL)
	@list='$(lib_LIBRARIES)'; test -n "$(libdir)" || list=; \
	for p in $$list; do \
	  if test -f $$p; then \
	    $(am__strip_dir) \
	    echo " ( cd '$(DESTDIR)$(libdir)' && $(RANLIB) $$f )"; \
	    ( cd "$(DESTDIR)$(libdir)" && $(RANLIB) $$f ) || exit $$?; \
	  else :; fi; \
	done

uninstall-libLIBRARIES:
	@$(NORMAL_UNINSTALL)
	@list='$(lib_LIBRARIES)'; test -n "$(libdir)" || list=; \
	files=`for p in $$list; do echo $$p; done | sed -e 's|^.*/||'`; \
	dir='$(DESTDIR)$(libdir)'; $(am__uninstall_files_from_dir)

clean-libLIBRARIES:
	-test -z "$(lib_LIBRARIES)" || rm -f $(lib_LIBRARIES)

libpspnet.a: $(libpspnet_a_OBJECTS) $(libpspnet_a_DEPENDENCIES) $(EXTRA_libpspnet_a_DEPENDENCIES) 
	$(AM_V_at)-rm -f libpspnet.a
	$(AM_V_AR)$(libpspnet_a_AR) libpspnet.a $(libpspnet_a_OBJECTS) $(libpspnet_a_LIBADD)
	$(AM_V_at)$(RANLIB) libpspnet.a

libpspnet_adhoc.a: $(libpspnet_adhoc_a_OBJECTS) $(libpspnet_adhoc_a_DEPENDENCIES) $(EXTRA_libpspnet_adhoc_a_DEPENDENCIES) 
	$(AM_V_at)-rm -f libpspnet_adhoc.a
	$(AM_V_AR)$(libpspnet_adhoc_a_AR) libpspnet_adhoc.a $(libpspnet_adhoc_a_OBJECTS) $(libpspnet_adhoc_a_LIBADD)
	$(AM_V_at)$(RANLIB) libpspnet_adhoc.a

libpspnet_adhocctl.a: $(libpspnet_adhocctl_a_OBJECTS) $(libpspnet_adhocctl_a_DEPENDENCIES) $(EXTRA_libpspnet_adhocctl_a_DEPENDENCIES) 
	$(AM_V_at)-rm -f libpspnet_adhocctl.a
	$(AM_V_AR)$(libpspnet_adhocctl_a_AR) libpspnet_adhocctl.a $(libpspnet_adhocctl_a_OBJECTS) $(libpspnet_adhocctl_a_LIBADD)
	$(AM_V_at)$(RANLIB) libpspnet_adhocctl.a

libpspnet_adhocmatching.a: $(libpspnet_adhocmatching_a_OBJECTS) $(libpspnet_adhocmatching_a_DEPENDENCIES) $(EXTRA_libpspnet_adhocmatching_a_DEPENDENCIES) 
	$(AM_V_at)-rm -f libpspnet_adhocmatching.a
	$(AM_V_AR)$(libpspnet_adhocmatching_a_AR) libpspnet_adhocmatching.a $(libpspnet_adhocmatching_a_OBJECTS) $(libpspnet_adhocmatching_a_LIBADD)
	$(AM_V_at)$(RANLIB) libpspnet_adhocmatching.a

libpspnet_apctl.a: $(libpspnet_apctl_a_OBJECTS) $(libpspnet_apctl_a_DEPENDENCIES) $(EXTRA_libpspnet_apctl_a_DEPENDENCIES) 
	$(AM_V_at)-rm -f libpspnet_apctl.a
	$(AM_V_AR)$(libpspnet_apctl_a_AR) libpspnet_apctl.a $(libpspnet_apctl_a_OBJECTS) $(libpspnet_apctl_a_LIBADD)
	$(AM_V_at)$(RANLIB) libpspnet_apctl.a

libpspnet_inet.a: $(libpspnet_inet_a_OBJECTS) $(libpspnet_inet_a_DEPENDENCIES) $(EXTRA_libpspnet_inet_a_DEPENDENCIES) 
	$(AM_V_at)-rm -f libpspnet_inet.a
	$(AM_V_AR)$(libpspnet_inet_a_AR) libpspnet_inet.a $(libpspnet_inet_a_OBJECTS) $(libpspnet_inet_a_LIBADD)
	$(AM_V_at)$(RANLIB) libpspnet_inet.a

libpspnet_resolver.a: $(libpspnet_resolver_a_OBJECTS) $(libpspnet_resolver_a_DEPENDENCIES) $(EXTRA_libpspnet_resolver_a_DEPENDENCIES) 
	$(AM_V_at)-rm -f libpspnet_resolver.a
	$(AM_V_AR)$(libpspnet_resolver_a_AR) libpspnet_resolver.a $(libpspnet_resolver_a_OBJECTS) $(libpspnet_resolver_a_LIBADD)
	$(AM_V_at)$(RANLIB) libpspnet_resolver.a

mostlyclean-compile:
	-rm -f *.$(OBJEXT)

distclean-compile:
	-rm -f *.tab.c

include ./$(DEPDIR)/sceNet.Po # am--include-marker
include ./$(DEPDIR)/sceNetAdhoc.Po # am--include-marker
include ./$(DEPDIR)/sceNetAdhocMatching.Po # am--include-marker
include ./$(DEPDIR)/sceNetAdhocctl.Po # am--include-marker
include ./$(DEPDIR)/sceNetApctl.Po # am--include-marker
include ./$(DEPDIR)/sceNetInet.Po # am--include-marker
include ./$(DEPDIR)/sceNetResolver.Po # am--include-marker
include ./$(DEPDIR)/sceNet_lib.Po # am--include-marker

$(am__depfiles_remade):
	@$(MKDIR_P) $(@D)
	@echo '# dummy' >$@-t && $(am__mv) $@-t $@

am--depfiles: $(am__depfiles_remade)

.S.o:
	$(AM_V_CPPAS)$(CPPASCOMPILE) -MT $@ -MD -MP -MF $(DEPDIR)/$*.Tpo -c -o $@ $<
	$(AM_V_at)$(am__mv) $(DEPDIR)/$*.Tpo $(DEPDIR)/$*.Po
#	$(AM_V_CPPAS)source='$<' object='$@' libtool=no \
#	DEPDIR=$(DEPDIR) $(CCASDEPMODE) $(depcomp) \
#	$(AM_V_CPPAS_no)$(CPPASCOMPILE) -c -o $@ $<

.S.obj:
	$(AM_V_CPPAS)$(CPPASCOMPILE) -MT $@ -MD -MP -MF $(DEPDIR)/$*.Tpo -c -o $@ `$(CYGPATH_W) '$<'`
	$(AM_V_at)$(am__mv) $(DEPDIR)/$*.Tpo $(DEPDIR)/$*.Po
#	$(AM_V_CPPAS)source='$<' object='$@' libtool=no \
#	DEPDIR=$(DEPDIR) $(CCASDEPMODE) $(depcomp) \
#	$(AM_V_CPPAS_no)$(CPPASCOMPILE) -c -o $@ `$(CYGPATH_W) '$<'`
install-libpspnetincludeHEADERS: $(libpspnetinclude_HEADERS)
	@$(NORMAL_INSTALL)
	@list='$(libpspnetinclude_HEADERS)'; test -n "$(libpspnetincludedir)" || list=; \
	if test -n "$$list"; then \
	  echo " $(MKDIR_P) '$(DESTDIR)$(libpspnetincludedir)'"; \
	  $(MKDIR_P) "$(DESTDIR)$(libpspnetincludedir)" || exit 1; \
	fi; \
	for p in $$list; do \
	  if test -f "$$p"; then d=; else d="$(srcdir)/"; fi; \
	  echo "$$d$$p"; \
	done | $(am__base_list) | \
	while read files; do \
	  echo " $(INSTALL_HEADER) $$files '$(DESTDIR)$(libpspnetincludedir)'"; \
	  $(INSTALL_HEADER) $$files "$(DESTDIR)$(libpspnetincludedir)" || exit $$?; \
	done

uninstall-libpspnetincludeHEADERS:
	@$(NORMAL_UNINSTALL)
	@list='$(libpspnetinclude_HEADERS)'; test -n "$(libpspnetincludedir)" || list=; \
	files=`for p in $$list; do echo $$p; done | sed -e 's|^.*/||'`; \
	dir='$(DESTDIR)$(libpspnetincludedir)'; $(am__uninstall_files_from_dir)

ID: $(am__tagged_files)
	$(am__define_uniq_tagged_files); mkid -fID $$unique
tags: tags-am
TAGS: tags

tags-am: $(TAGS_DEPENDENCIES) $(am__tagged_files)
	set x; \
	here=`pwd`; \
	$(am__define_uniq_tagged_files); \
	shift; \
	if test -z "$(ETAGS_ARGS)$$*$$unique"; then :; else \
	  test -n "$$unique" || unique=$$empty_fix; \
	  if test $$# -gt 0; then \
	    $(ETAGS) $(ETAGSFLAGS) $(AM_ETAGSFLAGS) $(ETAGS_ARGS) \
	      "$$@" $$unique; \
	  else \
	    $(ETAGS) $(ETAGSFLAGS) $(AM_ETAGSFLAGS) $(ETAGS_ARGS) \
	      $$unique; \
	  fi; \
	fi
ctags: ctags-am

CTAGS: ctags
ctags-am: $(TAGS_DEPENDENCIES) $(am__tagged_files)
	$(am__define_uniq_tagged_files); \
	test -z "$(CTAGS_ARGS)$$unique" \
	  || $(CTAGS) $(CTAGSFLAGS) $(AM_CTAGSFLAGS) $(CTAGS_ARGS) \
	     $$unique

GTAGS:
	here=`$(am__cd) $(top_builddir) && pwd` \
	  && $(am__cd) $(top_srcdir) \
	  && gtags -i $(GTAGS_ARGS) "$$here"
cscopelist: cscopelist-am

cscopelist-am: $(am__tagged_files)
	list='$(am__tagged_files)'; \
	case "$(srcdir)" in \
	  [\\/]* | ?:[\\/]*) sdir="$(srcdir)" ;; \
	  *) sdir=$(subdir)/$(srcdir) ;; \
	esac; \
	for i in $$list; do \
	  if test -f "$$i"; then \
	    echo "$(subdir)/$$i"; \
	  else \
	    echo "$$sdir/$$i"; \
	  fi; \
	done >> $(top_builddir)/cscope.files

distclean-tags:
	-rm -f TAGS ID GTAGS GRTAGS GSYMS GPATH tags
distdir: $(BUILT_SOURCES)
	$(MAKE) $(AM_MAKEFLAGS) distdir-am

distdir-am: $(DISTFILES)
	@srcdirstrip=`echo "$(srcdir)" | sed 's/[].[^$$\\*]/\\\\&/g'`; \
	topsrcdirstrip=`echo "$(top_srcdir)" | sed 's/[].[^$$\\*]/\\\\&/g'`; \
	list='$(DISTFILES)'; \
	  dist_files=`for file in $$list; do echo $$file; done | \
	  sed -e "s|^$$srcdirstrip/||;t" \
	      -e "s|^$$topsrcdirstrip/|$(top_builddir)/|;t"`; \
	case $$dist_files in \
	  */*) $(MKDIR_P) `echo "$$dist_files" | \
			   sed '/\//!d;s|^|$(distdir)/|;s,/[^/]*$$,,' | \
			   sort -u` ;; \
	esac; \
	for file in $$dist_files; do \
	  if test -f $$file || test -d $$file; then d=.; else d=$(srcdir); fi; \
	  if test -d $$d/$$file; then \
	    dir=`echo "/$$file" | sed -e 's,/[^/]*$$,,'`; \
	    if test -d "$(distdir)/$$file"; then \
	      find "$(distdir)/$$file" -type d ! -perm -700 -exec chmod u+rwx {} \;; \
	    fi; \
	    if test -d $(srcdir)/$$file && test $$d != $(srcdir); then \
	      cp -fpR $(srcdir)/$$file "$(distdir)$$dir" || exit 1; \
	      find "$(distdir)/$$file" -type d ! -perm -700 -exec chmod u+rwx {} \;; \
	    fi; \
	    cp -fpR $$d/$$file "$(distdir)$$dir" || exit 1; \
	  else \
	    test -f "$(distdir)/$$file" \
	    || cp -p $$d/$$file "$(distdir)/$$file" \
	    || exit 1; \
	  fi; \
	done
check-am: all-am
check: check-am
all-am: Makefile $(LIBRARIES) $(HEADERS)
installdirs:
	for dir in "$(DESTDIR)$(libdir)" "$(DESTDIR)$(libpspnetincludedir)"; do \
	  test -z "$$dir" || $(MKDIR_P) "$$dir"; \
	done
install: install-am
install-exec: install-exec-am
install-data: install-data-am
uninstall: uninstall-am

install-am: all-am
	@$(MAKE) $(AM_MAKEFLAGS) install-exec-am install-data-am

installcheck: installcheck-am
install-strip:
	if test -z '$(STRIP)'; then \
	  $(MAKE) $(AM_MAKEFLAGS) INSTALL_PROGRAM="$(INSTALL_STRIP_PROGRAM)" \
	    install_sh_PROGRAM="$(INSTALL_STRIP_PROGRAM)" INSTALL_STRIP_FLAG=-s \
	      install; \
	else \
	  $(MAKE) $(AM_MAKEFLAGS) INSTALL_PROGRAM="$(INSTALL_STRIP_PROGRAM)" \
	    install_sh_PROGRAM="$(INSTALL_STRIP_PROGRAM)" INSTALL_STRIP_FLAG=-s \
	    "INSTALL_PROGRAM_ENV=STRIPPROG='$(STRIP)'" install; \
	fi
mostlyclean-generic:

clean-generic:

distclean-generic:
	-test -z "$(CONFIG_CLEAN_FILES)" || rm -f $(CONFIG_CLEAN_FILES)
	-test . = "$(srcdir)" || test -z "$(CONFIG_CLEAN_VPATH_FILES)" || rm -f $(CONFIG_CLEAN_VPATH_FILES)

maintainer-clean-generic:
	@echo "This command is intended for maintainers to use"
	@echo "it deletes files that may require special tools to rebuild."
clean: clean-am

clean-am: clean-generic clean-libLIBRARIES mostlyclean-am

distclean: distclean-am
		-rm -f ./$(DEPDIR)/sceNet.Po
	-rm -f ./$(DEPDIR)/sceNetAdhoc.Po
	-rm -f ./$(DEPDIR)/sceNetAdhocMatching.Po
	-rm -f ./$(DEPDIR)/sceNetAdhocctl.Po
	-rm -f ./$(DEPDIR)/sceNetApctl.Po
	-rm -f ./$(DEPDIR)/sceNetInet.Po
	-rm -f ./$(DEPDIR)/sceNetResolver.Po
	-rm -f ./$(DEPDIR)/sceNet_lib.Po
	-rm -f Makefile
distclean-am: clean-am distclean-compile distclean-generic \
	distclean-tags

dvi: dvi-am

dvi-am:

html: html-am

html-am:

info: info-am

info-am:

install-data-am: install-libpspnetincludeHEADERS

install-dvi: install-dvi-am

install-dvi-am:

install-exec-am: install-libLIBRARIES

install-html: install-html-am

install-html-am:

install-info: install-info-am

install-info-am:

install-man:

install-pdf: install-pdf-am

install-pdf-am:

install-ps: install-ps-am

install-ps-am:

installcheck-am:

maintainer-clean: maintainer-clean-am
		-rm -f ./$(DEPDIR)/sceNet.Po
	-rm -f ./$(DEPDIR)/sceNetAdhoc.Po
	-rm -f ./$(DEPDIR)/sceNetAdhocMatching.Po
	-rm -f ./$(DEPDIR)/sceNetAdhocctl.Po
	-rm -f ./$(DEPDIR)/sceNetApctl.Po
	-rm -f ./$(DEPDIR)/sceNetInet.Po
	-rm -f ./$(DEPDIR)/sceNetResolver.Po
	-rm -f ./$(DEPDIR)/sceNet_lib.Po
	-rm -f Makefile
maintainer-clean-am: distclean-am maintainer-clean-generic

mostlyclean: mostlyclean-am

mostlyclean-am: mostlyclean-compile mostlyclean-generic

pdf: pdf-am

pdf-am:

ps: ps-am

ps-am:

uninstall-am: uninstall-libLIBRARIES uninstall-libpspnetincludeHEADERS

.MAKE: install-am install-strip

.PHONY: CTAGS GTAGS TAGS all all-am am--depfiles check check-am clean \
	clean-generic clean-libLIBRARIES cscopelist-am ctags ctags-am \
	distclean distclean-compile distclean-generic distclean-tags \
	distdir dvi dvi-am html html-am info info-am install \
	install-am install-data install-data-am install-dvi \
	install-dvi-am install-exec install-exec-am install-html \
	install-html-am install-info install-info-am \
	install-libLIBRARIES install-libpspnetincludeHEADERS \
	install-man install-pdf install-pdf-am install-ps \
	install-ps-am install-strip installcheck installcheck-am \
	installdirs maintainer-clean maintainer-clean-generic \
	mostlyclean mostlyclean-compile mostlyclean-generic pdf pdf-am \
	ps ps-am tags tags-am uninstall uninstall-am \
	uninstall-libLIBRARIES uninstall-libpspnetincludeHEADERS

.PRECIOUS: Makefile


$(NET_OBJS): sceNet.S
	$(AM_V_CPPAS)$(CPPASCOMPILE) -DF_$* $< -c -o $@

$(NETLIB_OBJS): sceNet_lib.S
	$(AM_V_CPPAS)$(CPPASCOMPILE) -DF_$* $< -c -o $@

$(NET_APCTL_OBJS): sceNetApctl.S
	$(AM_V_CPPAS)$(CPPASCOMPILE) -DF_$* $< -c -o $@

$(NET_INET_OBJS): sceNetInet.S
	$(AM_V_CPPAS)$(CPPASCOMPILE) -DF_$* $< -c -o $@

$(NET_RESOLVER_OBJS): sceNetResolver.S
	$(AM_V_CPPAS)$(CPPASCOMPILE) -DF_$* $< -c -o $@

$(NET_ADHOC_OBJS): sceNetAdhoc.S
	$(AM_V_CPPAS)$(CPPASCOMPILE) -DF_$* $< -c -o $@

$(NET_ADHOCCTL_OBJS): sceNetAdhocctl.S
	$(AM_V_CPPAS)$(CPPASCOMPILE) -DF_$* $< -c -o $@

$(NET_ADHOCMATCHING_OBJS): sceNetAdhocMatching.S
	$(AM_V_CPPAS)$(CPPASCOMPILE) -DF_$* $< -c -o $@

# Tell versions [3.59,3.63) of GNU make to not export all variables.
# Otherwise a system limit (for SysV at least) may be exceeded.
.NOEXPORT:
