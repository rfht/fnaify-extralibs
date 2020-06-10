/* FMOD_SDL_stub: stub library for FMOD_SDL, an SDL Audio Output Plugin for FMOD Studio
 *
 * Copyright (c) 2018-2019 Ethan Lee
 * Copyright (c) 2019 Thomas Frohwein
 *
 * This software is provided 'as-is', without any express or implied warranty.
 * In no event will the authors be held liable for any damages arising from
 * the use of this software.
 *
 * Permission is granted to anyone to use this software for any purpose,
 * including commercial applications, and to alter it and redistribute it
 * freely, subject to the following restrictions:
 *
 * 1. The origin of this software must not be misrepresented; you must not
 * claim that you wrote the original software. If you use this software in a
 * product, an acknowledgment in the product documentation would be
 * appreciated but is not required.
 *
 * 2. Altered source versions must be plainly marked as such, and must not be
 * misrepresented as being the original software.
 *
 * 3. This notice may not be removed or altered from any source distribution.
 *
 * Ethan "flibitijibibo" Lee <flibitijibibo@flibitijibibo.com>
 *
 */

#include <stdio.h>

//#include <SDL.h>
//#include "fmod.h"
//#include "fmod_output.h"
//#ifdef PRELOAD_MODE
//#include "fmod_studio.h"
//#endif

/* Public API */

#define FMOD_SDL_VERSION 190916

void FMOD_SDL_Register(int *system);

/* Driver Implementation */

typedef struct FMOD_SDL_Device
{
	int device;
	int frameSize;
} FMOD_SDL_Device;

static void FMOD_SDL_MixCallback(void* userdata, int *stream,	int len)
{
}

static int FMOD_SDL_GetNumDrivers(
	int *output_state,
	int *numdrivers
) {
	return 0;
}

static int FMOD_SDL_GetDriverInfo(
	int *output_state,
	int id,
	char *name,
	int namelen,
	int *guid,
	int *systemrate,
	int *speakermode,
	int *speakermodechannels
) {
	return 0;
}

static int FMOD_SDL_Init(
	int *output_state,
	int selecteddriver,
	int flags,
	int *outputrate,
	int *speakermode,
	int *speakermodechannels,
	int *outputformat,
	int dspbufferlength,
	int dspnumbuffers,
	void *extradriverdata
) {
	return 0;
}

static int FMOD_SDL_Start(int *output_state)
{
	return 0;
}

static int FMOD_SDL_Stop(int *output_state)
{
	return 0;
}

static int FMOD_SDL_Close(int *output_state)
{
	return 0;
}

static int FMOD_SDL_Driver =
{
	0,
	"FMOD_SDL",
	FMOD_SDL_VERSION,
	0, /* We have our own thread! */
	0,
	0,
	FMOD_SDL_Init,
	FMOD_SDL_Start,
	FMOD_SDL_Stop,
	FMOD_SDL_Close,
	NULL, /* Does anyone really want the native handle? */
	NULL, /* We have our own thread! */
	NULL, /* We have our own thread! */
	NULL, /* We have our own thread! */
	NULL, /* We have our own thread! */
	NULL, /* 3D object hardware...? */
	NULL, /* 3D object hardware...? */
	NULL, /* Auxiliary ports...? */
	NULL /* Auxiliary ports...? */
};

/* Public API Implementation */

#ifndef PRELOAD_MODE
void FMOD_SDL_Register(int *system)
{
}
#endif
