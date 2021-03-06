#ifndef UTILITY_TAGITEM_H
#define UTILITY_TAGITEM_H

/*
    Copyright � 1995-2001, The AROS Development Team. All rights reserved.
    $Id: tagitem.h 18038 2003-06-20 21:11:10Z chodorowski $

    Desc: Tag-lists
    Lang: english
*/

#ifndef EXEC_TYPES_H
#   include <exec/types.h>
#endif
#ifdef AROS_SLOWSTACKTAGS
#   include <stdarg.h>
#endif

typedef STACKULONG Tag;

struct TagItem
{
    Tag       ti_Tag;  /* What is this ? */
    STACKIPTR ti_Data; /* Tag-specific data */
};

/* constants for Tag.ti_Tag, control tag values */
#define TAG_DONE   (0L)   /* terminates array of TagItems. ti_Data unused */
#define TAG_END    (0L)   /* synonym for TAG_DONE                         */
#define TAG_IGNORE (1L)   /* ignore this item, not end of array           */
#define TAG_MORE   (2L)   /* ti_Data is pointer to another array of TagItems
			     note that this tag terminates the current array */
#define TAG_SKIP   (3L)   /* skip this and the next ti_Data items         */

/* What separates user tags from system tags */
#define TAG_USER    ((ULONG)(1L<<31))
#define TAG_OS	    (16L)   /* The first tag used by the OS */

/* Tag-Offsets for the OS */
#define DOS_TAGBASE	    (TAG_OS)        /* Reserve 16k tags for DOS */
#define INTUITION_TAGBASE   (TAG_OS | 0x2000) /* Reserve 16k tags for Intuition */

/* Tag filter for FilterTagItems() */
#define TAGFILTER_AND 0 	/* exclude everything but filter hits	*/
#define TAGFILTER_NOT 1 	/* exclude only filter hits		*/

/* Mapping types for MapTags() */
#define MAP_REMOVE_NOT_FOUND 0	/* remove tags that aren't in mapList */
#define MAP_KEEP_NOT_FOUND   1	/* keep tags that aren't in mapList   */

/* Macro for syntactic sugar (and a little extra bug-resiliance) */
#ifndef __VBCC__
#define TAGLIST(args...) ((struct TagItem *)(IPTR []){ args, TAG_DONE })
#endif /* __VBCC__ */

/*
    Some macros to make it easier to write functions which operate on
    stacktags on every CPU/compiler/hardware.
*/
#ifndef AROS_TAGRETURNTYPE
#   define AROS_TAGRETURNTYPE IPTR
#endif
#ifdef AROS_TAGRETURNTYPEVOID
#   ifdef AROS_SLOWSTACKTAGS
#	define AROS_SLOWSTACKTAGS_PRE(arg)		\
	    va_list		  args;			\
	    struct TagItem	* tags;			\
							\
	    va_start (args, arg);			\
							\
	    if ((tags = GetTagsFromStack (arg, args)))	\
	    {
#	define AROS_SLOWSTACKTAGS_ARG(arg) tags
#	define AROS_SLOWSTACKTAGS_POST			\
		FreeTagsFromStack (tags);		\
	    }						\
							\
	    va_end (args);				\
							\
	    return;
#   else
#	define AROS_SLOWSTACKTAGS_PRE(arg)
#	define AROS_SLOWSTACKTAGS_ARG(arg) ((struct TagItem *)&(arg))
#	define AROS_SLOWSTACKTAGS_POST     return;
#   endif
#else /* AROS_TAGRETURNTYPEVOID */
#   ifdef AROS_SLOWSTACKTAGS
#	define AROS_SLOWSTACKTAGS_PRE(arg)		\
	    AROS_TAGRETURNTYPE	  retval;		\
	    va_list		  args;			\
	    struct TagItem	* tags;			\
							\
	    va_start (args, arg);			\
							\
	    if ((tags = GetTagsFromStack (arg, args)))	\
	    {						\
		retval =
#	define AROS_SLOWSTACKTAGS_ARG(arg) tags
#	define AROS_SLOWSTACKTAGS_POST			\
		FreeTagsFromStack (tags);		\
	    }						\
	    else					\
		retval = (AROS_TAGRETURNTYPE)0L;	\
							\
	    va_end (args);				\
							\
	    return retval;
#   else
#	define AROS_SLOWSTACKTAGS_PRE(arg) AROS_TAGRETURNTYPE retval;
#	define AROS_SLOWSTACKTAGS_ARG(arg) ((struct TagItem *)&(arg))
#	define AROS_SLOWSTACKTAGS_POST     return retval;
#   endif
#endif /* AROS_TAGRETURNTYPEVOID */

#endif /* UTILITY_TAGITEM_H */
