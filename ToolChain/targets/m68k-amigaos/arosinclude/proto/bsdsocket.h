#ifndef PROTO_BSDSOCKET_H
#define PROTO_BSDSOCKET_H

/*
    *** Automatically generated from 'bsdsocket.conf'. Edits will be lost. ***
    Copyright � 1995-2005, The AROS Development Team. All rights reserved.
*/

#include <aros/system.h>

#ifdef __VBCC__
#include <inline/bsdsocket_protos.h>
#define NOLIBDEFINES
#else
#include <clib/bsdsocket_protos.h>
#endif /* __VBCC__ */

#if !defined(SocketBase) && !defined(__NOLIBBASE__) && !defined(__BSDSOCKET_NOLIBBASE__)
extern struct Library *SocketBase;
#endif

#if !defined(NOLIBDEFINES) && !defined(BSDSOCKET_NOLIBDEFINES)
#   include <defines/bsdsocket.h>
#endif

#endif /* PROTO_BSDSOCKET_H */
