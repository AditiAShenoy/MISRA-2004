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
 * 19.6 #undef shall not be used.
 */

#include "mc2_types.h"
#include "mc2_header.h"

#define mc2_1906_size 6

void mc2_1906 ( void )
{
   int8_t mc2_1906_a = 0;
   use_int8 ( mc2_1906_a );
   mc2_1906_a += mc2_1906_size;
   use_int8 ( mc2_1906_a );
}

/* Following statement is not compliant */
#undef mc2_1906_size

/* end of mc2_1906.c */
