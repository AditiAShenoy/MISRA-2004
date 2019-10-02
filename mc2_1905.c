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
 * 19.5 Macros shall not be #define'd or #undef 'd within a block.
 */

#include "mc2_types.h"
#include "mc2_header.h"

void mc2_1905 ( void )
{
   int8_t mc2_1905_a = 0;
   use_int8 ( mc2_1905_a );

/* Following statement is not compliant */
#define mc2_1905_size 6

   mc2_1905_a += mc2_1905_size;
   use_int8 ( mc2_1905_a );

/* Following statement is not compliant - also Rule 19.6 */
#undef mc2_1905_size
}

/* end of mc2_1905.c */
