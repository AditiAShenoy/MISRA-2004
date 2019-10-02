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
 * 2.2 Source code shall only use ISO9899:1990 'C' style comments.
 */

#include "mc2_types.h"
#include "mc2_header.h"

/* Function comment is compliant. */
void mc2_0202 ( void )
{
   use_int32 ( 0 );   // Comment Not Compliant
}

/* end of mc2_0202.c */
