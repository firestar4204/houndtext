#include <main.h>
#include <die.h>
#include <raw.h>
#include <input.h>

#ifdef HAVE_CTYPE_H
#include <ctype.h>
#endif
#ifdef HAVE_ERRNO_H
#include <errno.h>
#endif
#ifdef HAVE_STDIO_H
#include <stdio.h>
#endif
#ifdef HAVE_STDLIB_H
#include <stdlib.h>
#endif
#ifdef HAVE_TERMIOS_H
#include <termios.h>
#endif
#ifdef HAVE_UNISTD_H
#include <unistd.h>
#endif

struct termios orig_termios;

int
main(int argc,
     char argv)
{
	enable_raw_mode();

	while (1) {
		editor_process_keypress();
	}

	return 0;
}

