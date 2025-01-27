//-------------------------------------------------------------------------
/*
Copyright (C) 2010-2019 EDuke32 developers and contributors
Copyright (C) 2019 Nuke.YKT

This file is part of NBlood.

NBlood is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License version 2
as published by the Free Software Foundation.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.

See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
*/
//-------------------------------------------------------------------------

//****************************************************************************
//
// gamedefs.h
//
// common defines between the game and the setup program
//
//****************************************************************************

#ifndef gamedefs_public_h_
#define gamedefs_public_h_
#ifdef __cplusplus
extern "C" {
#endif

// config file name
#ifdef __PSP2__
#define SETUPFILENAME "ux0:data/NBlood/blood.cfg"
#else
#define SETUPFILENAME APPBASENAME ".cfg"
#endif

// KEEPINSYNC mact/include/_control.h, build/src/sdlayer.cpp
#define MAXJOYBUTTONS 32
#define MAXJOYBUTTONSANDHATS (MAXJOYBUTTONS+4)

// KEEPINSYNC mact/include/_control.h, build/src/sdlayer.cpp
#define MAXMOUSEAXES 2

// KEEPINSYNC mact/include/_control.h, build/src/sdlayer.cpp
#define MAXJOYAXES 9
#define MAXJOYDIGITAL (MAXJOYAXES*2)

// default mouse scale
#define DEFAULTMOUSEANALOGUESCALE           65536

// default joystick settings

#if defined(GEKKO)
#define DEFAULTJOYSTICKANALOGUESCALE        16384
#define DEFAULTJOYSTICKANALOGUEDEAD         1000
#define DEFAULTJOYSTICKANALOGUESATURATE     9500
#else
#define DEFAULTJOYSTICKANALOGUESCALE        65536
#define DEFAULTJOYSTICKANALOGUEDEAD         1000
#define DEFAULTJOYSTICKANALOGUESATURATE     9500
#endif

#ifdef __cplusplus
}
#endif
#endif

