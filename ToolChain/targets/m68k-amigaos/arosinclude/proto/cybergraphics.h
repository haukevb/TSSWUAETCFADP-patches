#ifndef PROTO_CYBERGRAPHICS_H
#define PROTO_CYBERGRAPHICS_H

/*
    *** Automatically generated from 'cybergraphics.conf'. Edits will be lost. ***
    Copyright � 1995-2005, The AROS Development Team. All rights reserved.
*/

#include <aros/system.h>

#ifdef __VBCC__
#include <inline/cybergraphics_protos.h>
#define NOLIBDEFINES
#else
#include <clib/cybergraphics_protos.h>
#endif /* __VBCC__ */

#if !defined(CyberGfxBase) && !defined(__NOLIBBASE__) && !defined(__CYBERGRAPHICS_NOLIBBASE__)
extern struct Library *CyberGfxBase;
#endif

#if !defined(NOLIBDEFINES) && !defined(CYBERGRAPHICS_NOLIBDEFINES)
#   include <defines/cybergraphics.h>
#endif

#endif /* PROTO_CYBERGRAPHICS_H */
