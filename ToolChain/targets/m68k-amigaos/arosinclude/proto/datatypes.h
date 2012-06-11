#ifndef PROTO_DATATYPES_H
#define PROTO_DATATYPES_H

/*
    *** Automatically generated from 'datatypes.conf'. Edits will be lost. ***
    Copyright � 1995-2005, The AROS Development Team. All rights reserved.
*/

#include <aros/system.h>

#ifdef __VBCC__
#include <inline/datatypes_protos.h>
#define NOLIBDEFINES
#else
#include <clib/datatypes_protos.h>
#endif /* __VBCC__ */

#if !defined(DataTypesBase) && !defined(__NOLIBBASE__) && !defined(__DATATYPES_NOLIBBASE__)
extern struct Library *DataTypesBase;
#endif

#if !defined(NOLIBDEFINES) && !defined(DATATYPES_NOLIBDEFINES)
#   include <defines/datatypes.h>
#endif

#endif /* PROTO_DATATYPES_H */
