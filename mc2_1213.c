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
 * 12.13   The increment (++) and decrement (--) operators should not be
 *         mixed with other operators in an expression.
 *
 */

#include "mc2_types.h"
#include "mc2_header.h"

void mc2_1213 ( void )
{
   uint16_t mc2_1213_a;
   uint16_t mc2_1213_b;
   uint16_t mc2_1213_c;
   uint16_t mc2_1213_d[2];
   uint16_t * mc2_1213_p;
   uint16_t * mc2_1213_q;

   struct mc2_1213_st
   {
      uint16_t member;
   } mc2_1213_s;

   struct mc2_1213_st * mc2_1213_sp;

   mc2_1213_c = get_uint16 ( );
   mc2_1213_d[0] = get_uint16 ( );
   mc2_1213_d[1] = get_uint16 ( );
   mc2_1213_p = &mc2_1213_c;
   mc2_1213_q = &mc2_1213_d[0];
   mc2_1213_s.member = get_uint16 ( );
   mc2_1213_sp = &mc2_1213_s;

   mc2_1213_b = mc2_1213_c++;                  /* Not Compliant */

   mc2_1213_a = ++mc2_1213_b + mc2_1213_c--;   /* Not Compliant */
   use_uint16 ( mc2_1213_a );

   ++mc2_1213_b;                               /* Compliant version of above */
   mc2_1213_a = mc2_1213_b + mc2_1213_c;
   mc2_1213_c--;

   if ( mc2_1213_a++ > 3U )                    /* Not Compliant */
   {
      use_uint16 ( mc2_1213_a );
   }

   use_uint16 ( mc2_1213_a );
   use_uint16 ( mc2_1213_c++ );                /* Not Compliant */

   ( *mc2_1213_p )++;                          /* Compliant */

   *mc2_1213_p++ = *mc2_1213_q++;              /* Not Compliant - also 17.4 */
   use_uint16_ptr ( mc2_1213_p );
   use_uint16_ptr ( mc2_1213_q );

   mc2_1213_a = 0U;
   use_uint16 ( mc2_1213_c );

   mc2_1213_c = mc2_1213_d[mc2_1213_a++];      /* Not Compliant */
   mc2_1213_c += mc2_1213_d[mc2_1213_a--];     /* Not Compliant */
   mc2_1213_d[mc2_1213_a++] = mc2_1213_c;      /* Not Compliant */

   mc2_1213_d[0]++;                            /* Compliant */

   mc2_1213_s.member ++;                       /* Compliant */
   mc2_1213_sp->member ++;                     /* Compliant */

   do
   {
      mc2_1213_c ++;                           /* Compliant */
   } while ( ( mc2_1213_a-- ) > 0U);           /* Not Compliant */

   use_uint16 ( mc2_1213_a );
   use_uint16 ( mc2_1213_c );
   use_uint16 ( mc2_1213_d[ 0 ] );
   use_uint16 ( mc2_1213_d[ 1 ] );
   use_uint16 ( mc2_1213_s.member );
}

/* end of mc2_1213.c */

