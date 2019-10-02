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
 * 19.8 A function-like macro shall not be invoked without all of its
 * arguments.
 */

#include "mc2_types.h"
#include "mc2_header.h"

#define sum(x,y) ((x) + (y)) /* Violates Rule 19.7 */

void mc2_1908 ( void )
{
   int8_t mc2_1908_a = 0;
   int8_t mc2_1908_b = 0;

   use_int8 ( mc2_1908_a );
   use_int8 ( mc2_1908_b );

   mc2_1908_b = sum ( mc2_1908_a, mc2_1908_b );

   use_int8 ( mc2_1908_b );

   mc2_1908_b = sum ( mc2_1908_a );  /* Not Compliant */

   use_int8 ( mc2_1908_a );
   use_int8 ( mc2_1908_b );
}

/* end of mc2_1908.c */
