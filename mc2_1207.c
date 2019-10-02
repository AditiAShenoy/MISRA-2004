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
 * 12.7   Bitwise operators shall not be applied to operands whose
 *        underlying type is signed.
 *
 */

#include "mc2_types.h"
#include "mc2_header.h"

void mc2_1207 ( void )
{
   int16_t mc2_1207_a;
   int16_t mc2_1207_b;
   int16_t mc2_1207_c;
   uint16_t mc2_1207_ua;

   mc2_1207_a = get_int16 ( );
   mc2_1207_b = get_int16 ( );
   mc2_1207_ua = get_uint16 ( );

   mc2_1207_ua = (uint16_t) ~mc2_1207_ua;   /* Compliant */
   use_uint16 ( mc2_1207_ua );

   mc2_1207_c  = ~mc2_1207_a;               /* Not compliant */
   use_int16 ( mc2_1207_c );

   mc2_1207_c = mc2_1207_a << mc2_1207_b;   /* Not compliant */
   use_int16 ( mc2_1207_c );

   mc2_1207_c = mc2_1207_a >> mc2_1207_b;   /* Not compliant */
   use_int16 ( mc2_1207_c );

   mc2_1207_c = mc2_1207_a & mc2_1207_b;    /* Not compliant */
   use_int16 ( mc2_1207_c );

   mc2_1207_c = mc2_1207_a | mc2_1207_b;    /* Not compliant */
   use_int16 ( mc2_1207_c );

   mc2_1207_c = mc2_1207_a ^ mc2_1207_b;    /* Not compliant */
   use_int16 ( mc2_1207_c );

   mc2_1207_c <<= mc2_1207_b;   /* Not compliant */

   mc2_1207_c >>= mc2_1207_b;   /* Not compliant */

   mc2_1207_c &=  mc2_1207_b;   /* Not compliant */

   mc2_1207_c |=  mc2_1207_b;   /* Not compliant */

   mc2_1207_c ^=  mc2_1207_b;   /* Not compliant */

   use_int16 ( mc2_1207_c );
}

/* end of mc2_1207.c */

