#include <main.h>
#include <die.h>

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

char
editor_read_key()
{
	int nread;
	char c;

	while ((nread = read(STDIN_FILENO, &c, 1)) != 1) {
		if (nread == -1 && errno != EAGAIN)
			die("read");
	}

	return c;
}

void
editor_process_keypress()
{
	char c = editor_read_key();

	switch (c) {
		case CTRL_KEY('q'):
			exit(0);
			break;
	}
}

