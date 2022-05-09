AC_INIT([houndtext], [0.0], [firestar4204@outlook.com])
AM_INIT_AUTOMAKE([-Wall -Werror foreign])

AC_CONFIG_HEADERS([include/config.h])
AC_CONFIG_FILES([Makefile src/Makefile])

AC_PROG_CC_C99

AC_HEADER_STDC
AC_HEADER_SYS_WAIT
AC_CHECK_HEADERS(stdlib.h stdio.h stdarg.h \
		 ctype.h errno.h fcntl.h string.h termios.h time.h unistd.h \
		 sys/ioctl.h sys/types.h)
AC_HEADER_TIOCGWINSZ
AC_HEADER_TIME

AC_C_CONST
AC_C_INLINE
AC_CHECK_FUNCS(atexit)

AC_OUTPUT

