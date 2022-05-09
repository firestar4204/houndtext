#ifndef HOUNDTEXT_MAIN_H
#define HOUNDTEXT_MAIN_H

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#ifdef HAVE_TERMIOS_H
#include <termios.h>
#endif

#define CTRL_KEY(k)	((k) & 0x1f)

extern struct termios orig_termios;

#endif
