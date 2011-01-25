AUTOMAKE_OPTIONS = 1.7
INCLUDES = $(PYTHON_INCLUDES) $(GLIB_CFLAGS) -DPY_SSIZE_T_CLEAN -DPYGLIB_COMPILATION

pkgincludedir = $(includedir)/pygtk-2.0/pyglib
pkginclude_HEADERS = 		\
	pyglib.h				\
	pyglib-core.h			\
	pyglib-python-compat.h	\
	pygsource.h

lib_LTLIBRARIES = libpyglib-2.0-@PYTHON_BASENAME@.la

pkgpyexecdir = $(pyexecdir)

pyglibdir = $(pkgpyexecdir)/glib
pyglib_PYTHON = 	\
	__init__.py		\
	option.py
pyglib_LTLIBRARIES = _glib.la

common_ldflags = -module -avoid-version
if PLATFORM_WIN32
common_ldflags += -no-undefined
endif

libpyglib_2_0_@PYTHON_BASENAME@_la_CFLAGS = $(GLIB_CFLAGS)
libpyglib_2_0_@PYTHON_BASENAME@_la_LDFLAGS = $(common_ldflags) -export-symbols-regex "libpyglib_2_0_@PYTHON_BASENAME@|pyglib_init"
libpyglib_2_0_@PYTHON_BASENAME@_la_LIBADD = $(GLIB_LIBS) $(FFI_LIBS) $(PYTHON_LIBS)
libpyglib_2_0_@PYTHON_BASENAME@_la_SOURCES = 	\
	pyglib.c

_glib_la_CFLAGS = $(GLIB_CFLAGS)
_glib_la_LDFLAGS = $(common_ldflags) -export-symbols-regex "_glib|PyInit__glib"
_glib_la_LIBADD = $(GLIB_LIBS)
_glib_la_SOURCES =			\
	glibmodule.c 			\
	pygiochannel.c 	 		\
	pygoptioncontext.c 		\
	pygoptiongroup.c 		\
	pygmaincontext.c 		\
	pygmainloop.c	 		\
	pygsource.c 	 		\
	pygspawn.c			\
	pygiochannel.h 	 		\
	pygoptioncontext.h 		\
	pygoptiongroup.h 		\
	pygmaincontext.h 		\
	pygmainloop.h	 		\
	pygsource.h 	 		\
	pygspawn.h


if PLATFORM_WIN32
_glib_la_CFLAGS += -DPLATFORM_WIN32
endif

all: $(pyglib_LTLIBRARIES:.la=.so)
check-local: $(pyglib_LTLIBRARIES:.la=.so)
clean-local:
	rm -f $(pyglib_LTLIBRARIES:.la=.so)
.la.so:
	$(LN_S) .libs/$@ $@ || true
