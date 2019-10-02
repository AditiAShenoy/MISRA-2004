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
 * 19.7 A function should be used in preference to a function-like macro.
 */

#include "mc2_types.h"
#include "mc2_header.h"

#define PLUS2(X) ((X)+2)  /* Not Compliant */

void mc2_1907 ( void )
{
   int8_t mc2_1907_a = 0;
   use_int8 ( mc2_1907_a );

   mc2_1907_a = PLUS2 ( mc2_1907_a );

   use_int8 ( mc2_1907_a );
}

/* end of mc2_1907.c */
