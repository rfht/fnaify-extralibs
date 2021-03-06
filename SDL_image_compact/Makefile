# Makefile for SDL_image_compact
# Written by Ethan "flibitijibibo" Lee

# System information
UNAME = $(shell uname)
ARCH = $(shell uname -m)

LDFLAGS += `sdl2-config --libs`

# Detect Windows target
WINDOWS_TARGET=0
ifeq ($(OS), Windows_NT) # cygwin/msys2
	WINDOWS_TARGET=1
endif
ifneq (,$(findstring w64-mingw32,$(CC)))  # mingw-w64 on Linux
	WINDOWS_TARGET=1
endif

# Compiler
ifeq ($(WINDOWS_TARGET),1)
	TARGET_PREFIX = 
	TARGET_SUFFIX = .dll
	LDFLAGS += -static-libgcc
else ifeq ($(UNAME), Darwin)
	CFLAGS += -mmacosx-version-min=10.6 -fpic -fPIC
	TARGET_PREFIX = lib
	TARGET_SUFFIX = -2.0.0.dylib
else
	CFLAGS += -fpic -fPIC
	TARGET_PREFIX = lib
	TARGET_SUFFIX = .so.0.0
endif

CFLAGS += -Wall -pedantic \
	-DLOAD_BMP \
	-DLOAD_GIF \
	-DUSE_STBIMAGE \
	-DUSE_TINYJPEG \
	-DSDL_IMAGE_USE_COMMON_BACKEND

# Source lists
IMGSRC = \
	IMG_bmp.c \
	IMG.c \
	IMG_gif.c \
	IMG_jpg.c \
	IMG_lbm.c \
	IMG_pcx.c \
	IMG_png.c \
	IMG_pnm.c \
	IMG_stb.c \
	IMG_svg.c \
	IMG_tga.c \
	IMG_tif.c \
	IMG_webp.c \
	IMG_xcf.c \
	IMG_xpm.c \
	IMG_xv.c

# Object code lists
IMGOBJ = $(IMGSRC:%.c=%.o)

# Targets

all: $(IMGOBJ)
	$(CC) $(CFLAGS) -shared -o $(TARGET_PREFIX)SDL2_image_compact$(TARGET_SUFFIX) $(IMGOBJ) $(LDFLAGS)

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $< `sdl2-config --cflags`

clean:
	rm -f $(IMGOBJ) $(TARGET_PREFIX)SDL2_image$(TARGET_SUFFIX)
