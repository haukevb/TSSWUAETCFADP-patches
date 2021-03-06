#ifndef PROTO_COLORWHEEL_H
#define PROTO_COLORWHEEL_H

/*
    *** Automatically generated from 'colorwheel.conf'. Edits will be lost. ***
    Copyright � 1995-2005, The AROS Development Team. All rights reserved.
*/

#include <aros/system.h>

#ifdef __VBCC__
#include <inline/colorwheel_protos.h>
#define NOLIBDEFINES
#else
#include <clib/colorwheel_protos.h>
#endif /* __VBCC__ */

#if !defined(ColorWheelBase) && !defined(__NOLIBBASE__) && !defined(__COLORWHEEL_NOLIBBASE__)
extern struct Library *ColorWheelBase;
#endif

#if !defined(NOLIBDEFINES) && !defined(COLORWHEEL_NOLIBDEFINES)
#   include <defines/colorwheel.h>
#endif

#endif /* PROTO_COLORWHEEL_H */
