#ifndef PROTO_WORKBENCH_H
#define PROTO_WORKBENCH_H

/*
    *** Automatically generated from 'workbench.conf'. Edits will be lost. ***
    Copyright � 1995-2005, The AROS Development Team. All rights reserved.
*/

#include <aros/system.h>

#ifdef __VBCC__
#include <inline/workbench_protos.h>
#define NOLIBDEFINES
#else
#include <clib/workbench_protos.h>
#endif /* __VBCC__ */

#if !defined(WorkbenchBase) && !defined(__NOLIBBASE__) && !defined(__WORKBENCH_NOLIBBASE__)
extern struct Library *WorkbenchBase;
#endif

#if !defined(NOLIBDEFINES) && !defined(WORKBENCH_NOLIBDEFINES)
#   include <defines/workbench.h>
#endif

#endif /* PROTO_WORKBENCH_H */
