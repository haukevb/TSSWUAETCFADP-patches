#ifndef PROTO_UTILITY_H
#define PROTO_UTILITY_H

/*
    *** Automatically generated from 'utility.conf'. Edits will be lost. ***
    Copyright � 1995-2005, The AROS Development Team. All rights reserved.
*/

#include <aros/system.h>

#ifdef __VBCC__
#include <inline/utility_protos.h>
#define NOLIBDEFINES
#else
#include <clib/utility_protos.h>
#endif /* __VBCC__ */

#if !defined(UtilityBase) && !defined(__NOLIBBASE__) && !defined(__UTILITY_NOLIBBASE__)
extern struct UtilityBase *UtilityBase;
#endif

#if !defined(NOLIBDEFINES) && !defined(UTILITY_NOLIBDEFINES)
#   include <defines/utility.h>
#endif

#endif /* PROTO_UTILITY_H */
