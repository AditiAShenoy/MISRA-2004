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
 * 19.10 In the definition of a function-like macro each instance of a
 * parameter shall be enclosed in parentheses unless it is used as the
 * operand of # or ##.
 */

#include "mc2_types.h"
#include "mc2_header.h"

/* Following four directives are function-like macro - Rule 19.7 */

#define mc2_1910b(x,y) ((x) + (y))

#define mc2_1910c(x,y) ((x) = #y) /* Also violates Rule 19.13 */

#define mc2_1910d(x,y) (x##y = 0) /* Also violates Rule 19.13 */

#define mc2_1910a(x,y) ((x) + y)  /* Not Compliant            */

void mc2_1910 ( void )
{
   int8_t mc2_1910_a;
   char_t * mc2_1910_b;
   int8_t mc2_1910_c;

   mc2_1910_a = mc2_1910a ( 2 - 3 , 2 + 2 );
   use_int8 ( mc2_1910_a );

   mc2_1910_a = mc2_1910b ( 2 - 3 , 2 + 2 );
   use_int8 ( mc2_1910_a );

   mc2_1910c (mc2_1910_b, "Hello World!");
   use_char_ptr ( mc2_1910_b );

   mc2_1910d ( mc2_ , 1910_c );
   use_int8 ( mc2_1910_c );

}

/* end of mc2_1910.c */
