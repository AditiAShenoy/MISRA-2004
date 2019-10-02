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
 * 19.12 There shall be at most one occurrence of the # or ## preprocessor
 * operators in a single macro definition.
 */

#include "mc2_types.h"
#include "mc2_header.h"

/* COMPLIANT with 19.12, not compliant with 19.13 */

#define mc2_1912A(x,y) (#x = (y))
#define mc2_1912B(x,y) (x##y = 0)

/* Following four directives are NOT COMPLIANT with 19.12 and 19.13 */

#define mc2_1912C(x,y) (#x = #y)
#define mc2_1912D(x,y) (x##y##y = 0)
#define mc2_1912E(x,y) (#x##1 = (y))
#define mc2_1912F(x,y) (x##y#y = 0)

void mc2_1912 ( void )
{
   int8_t mc2_1912_a = 0;
   use_int8 ( mc2_1912_a );
}

/* end of mc2_1912.c */
