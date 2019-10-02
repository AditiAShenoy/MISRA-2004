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
 * 19.4 C macros shall only expand to a braced initialiser, a constant, a
 * parenthesised expression, a type qualifier, a storage class specifier,
 * or a do-while-zero construct.
 */

#include "mc2_types.h"
#include "mc2_header.h"

#define PI  3.14159F         /* Constant */

#define XSTAL 10000000       /* Constant */

#define CLOCK (XSTAL/16)     /* Parenthesised expression */

#define LOCAL_CLOCK1 (CLOCK) /* Parenthesised expression */

#define PLUS2(X) ((X)+2)     /* This IS a function-like macro - Rule 19.7 */

#define STOR extern  /* Macro expanding to expression storage class specifier */

#define INIT(value) {(value),0,0} /* braced initialiser */

#define M_1904(x) \
   do { \
         if ((x) < 1000) \
         { \
            (x) = (x) + 1; \
         } \
         else \
         { \
            (x) = 1000; \
         } \
   } while (0) /* example of do-while-zero  */

/* Following three macro definitions are not compliant */
#define my_int32_t long

#define STARTIF if(

#define LOCAL_CLOCK2 CLOCK

void mc2_1904 ( void )
{
   int8_t mc2_1904_a = 0;
   float32_t mc2_1904_b = 0.0f;
   int32_t mc2_1904_c = 0;
   int8_t mc2_1904_d [ 3 ] = INIT ( 1 );

   use_int8 ( mc2_1904_a );
   use_float32 ( mc2_1904_b );
   use_int32 ( mc2_1904_c );
   use_int8 ( mc2_1904_d [ 0 ] );

   mc2_1904_b = PI;
   mc2_1904_c = CLOCK;
   use_int32 ( mc2_1904_c );
   mc2_1904_c = LOCAL_CLOCK1;
   use_int32 ( mc2_1904_c );
   mc2_1904_c = LOCAL_CLOCK2;

   use_int32 ( mc2_1904_c );

   mc2_1904_a = PLUS2 ( mc2_1904_a );

   mc2_1904_c = get_int32 ( );

   M_1904 ( mc2_1904_c );

   use_int8 ( mc2_1904_a );
   use_float32 ( mc2_1904_b );
   use_int32 ( mc2_1904_c );
}

/* end of mc2_1904.c */
