/*
 * Release Date: 17 JULY 2007
 *
 * MISRA-C:2004 Exemplar Suite
 *
 * Published by
 * MIRA Limited, Watling Street, Nuneaton, Warwickshire CV10 0TU UK
 * www.misra-c.com
 *
 * Copyright MIRA Limited, 2006, 2007.
 *
 * See file READ_ME.txt for full copyright, license and release information.
 */

/*
 * 8.3 For each function parameter the type given in the declaration and
 *     definition shall be identical, and the return types shall also be
 *     identical.
 */

#include "mc2_types.h"
#include "mc2_header.h"
#include "mc2_0803.h"

void mc2_0803_2 ( my_other_s32bit_int param0803 )
{
   use_int32 ( param0803 );
}

/* end of mc2_0803_2.c */
