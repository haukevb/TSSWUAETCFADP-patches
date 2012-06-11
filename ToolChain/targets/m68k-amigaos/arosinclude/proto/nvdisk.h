#ifndef PROTO_NVDISK_H
#define PROTO_NVDISK_H

/*
    *** Automatically generated from 'nvdisk.conf'. Edits will be lost. ***
    Copyright � 1995-2005, The AROS Development Team. All rights reserved.
*/

#include <aros/system.h>

#ifdef __VBCC__
#include <inline/nvdisk_protos.h>
#define NOLIBDEFINES
#else
#include <clib/nvdisk_protos.h>
#endif /* __VBCC__ */

#if !defined(nvdBase) && !defined(__NOLIBBASE__) && !defined(__NVDISK_NOLIBBASE__)
extern struct Library *nvdBase;
#endif

#if !defined(NOLIBDEFINES) && !defined(NVDISK_NOLIBDEFINES)
#   include <defines/nvdisk.h>
#endif

#endif /* PROTO_NVDISK_H */
