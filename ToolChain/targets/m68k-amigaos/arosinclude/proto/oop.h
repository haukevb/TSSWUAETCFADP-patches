#ifndef PROTO_OOP_H
#define PROTO_OOP_H

/*
    *** Automatically generated from 'oop.conf'. Edits will be lost. ***
    Copyright � 1995-2005, The AROS Development Team. All rights reserved.
*/

#include <aros/system.h>

#ifdef __VBCC__
#include <inline/oop_protos.h>
#define NOLIBDEFINES
#else
#include <clib/oop_protos.h>
#endif /* __VBCC__ */

#if !defined(OOPBase) && !defined(__NOLIBBASE__) && !defined(__OOP_NOLIBBASE__)
extern struct Library *OOPBase;
#endif

#if !defined(NOLIBDEFINES) && !defined(OOP_NOLIBDEFINES)
#   include <defines/oop.h>
#endif

#endif /* PROTO_OOP_H */
