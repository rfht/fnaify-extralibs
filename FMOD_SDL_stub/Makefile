# Makefile for FMOD_SDL
# Written by Ethan "flibitijibibo" Lee
# modified by Thomas Frohwein

CC ?=		cc
CFLAGS ?=	-O2 -pipe
RM ?=		rm -f
TARGET_LIB ?=	libfmod_SDL.so
MAJOR ?=	0
MINOR ?=	0

.PHONY: all
all:
	$(CC) $(CFLAGS) -Wall -pedantic -fpic -fPIC -shared -o libfmod_SDL.so.$(MAJOR).$(MINOR) FMOD_SDL.c `sdl2-config --cflags --libs`

preload:
	$(CC) -O3 -Wall -pedantic -fpic -fPIC -shared -o libfmod_SDL.so FMOD_SDL.c -DPRELOAD_MODE `sdl2-config --cflags --libs`

.PHONY: clean
clean:
	$(RM) $(TARGET_LIB).* *.o
