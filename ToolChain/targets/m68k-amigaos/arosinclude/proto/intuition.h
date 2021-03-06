#ifndef PROTO_INTUITION_H
#define PROTO_INTUITION_H

/*
    *** Automatically generated from 'intuition.conf'. Edits will be lost. ***
    Copyright � 1995-2005, The AROS Development Team. All rights reserved.
*/

#include <aros/system.h>

#ifdef __VBCC__
typedef AROS_32BIT_TYPE		Msg;			/* fix missing Msg definition */
#include <inline/intuition_protos.h>
#define NOLIBDEFINES
#else
#include <clib/intuition_protos.h>
#endif /* __VBCC__ */

#if !defined(IntuitionBase) && !defined(__NOLIBBASE__) && !defined(__INTUITION_NOLIBBASE__)
extern struct IntuitionBase *IntuitionBase;
#endif

#if !defined(NOLIBDEFINES) && !defined(INTUITION_NOLIBDEFINES)
#   include <defines/intuition.h>
#endif

#endif /* PROTO_INTUITION_H */
