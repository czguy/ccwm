#include <stdio.h>
#include <X11/Xlib.h>
#include <err.h>

static Display *dpy;
static int scr;
static Window root;

#define POSX 500