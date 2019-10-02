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
 * 14.8  The statement forming the body of a switch, while, do ... while or
 *       for statement shall be a compound statement.
 *
 */


#include "mc2_types.h"
#include "mc2_header.h"

void mc2_1408 ( void )
{
   uint16_t mc2_1408_x;

   for ( mc2_1408_x = 1U; mc2_1408_x < 3U; mc2_1408_x++ )
      use_uint16 ( mc2_1408_x );    /* Not compliant */

   for ( mc2_1408_x = 1U; mc2_1408_x < 3U; mc2_1408_x++ )
   {
      use_uint16 ( mc2_1408_x );    /* Compliant */
   }

   while ( mc2_1408_x > 0U )
      mc2_1408_x = get_uint16 ( );  /* Not compliant */

   while ( mc2_1408_x == 0U )
   {
      mc2_1408_x = get_uint16 ( );  /* Compliant */
   }

   do
   {
      mc2_1408_x = get_uint16 ( );  /* Compliant */
   } while ( mc2_1408_x > 0U );

   do
      mc2_1408_x = get_uint16 ( );  /* Not compliant */
   while ( mc2_1408_x > 0U );

   switch ( mc2_1408_x );           /* Not compliant - also not compliant with
                                     * Rules 14.3, 15.* and others */

   mc2_1408_x = get_uint16 ( );
   while ( mc2_1408_x > 0U );       /* Not compliant - also not compliant with
                                     * Rule 14.3 */
   {
       mc2_1408_x --;
   }

   use_uint16 ( mc2_1408_x );
}

/* end of mc2_1408.c */
