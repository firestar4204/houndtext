#ifdef HAVE_CONFIG_H
#include <config.h>
#endif
#ifdef HAVE_STDIO_H
#include <stdio.h>
#endif
#ifdef HAVE_STDLIB_H
#include <stdlib.h>
#endif

void
die(const char *s)
{
	perror(s);
	exit(1);
}

