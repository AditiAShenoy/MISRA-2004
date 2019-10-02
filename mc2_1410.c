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
 * 14.10  All if ... else if constructs shall be terminated with an else
 *        clause.
 *
 */


#include "mc2_types.h"
#include "mc2_header.h"

void mc2_1410 ( void )
{
   uint16_t mc2_1410_x;

   mc2_1410_x = get_uint16 ( );

   if ( mc2_1410_x > 5U )
   {
      use_uint16 ( mc2_1410_x );
   }                            /* Compliant -- else not needed */

   if ( mc2_1410_x < 1U )
   {
      use_uint16 ( mc2_1410_x );
   }
   else if ( mc2_1410_x > 1U )
   {
      use_uint16 ( mc2_1410_x );
   }
   else                         /* Compliant */
   {
      use_uint16 ( mc2_1410_x );
   }

   if ( mc2_1410_x < 3U )
   {
      use_uint16 ( mc2_1410_x );
   }
   else if ( mc2_1410_x > 5U )
   {
      use_uint16 ( mc2_1410_x );
   }                             /* Not compliant -- no else clause */

   if ( mc2_1410_x < 1U )
   {
      use_uint16 ( mc2_1410_x );
   }
   else if ( mc2_1410_x > 1U )
   {
      use_uint16 ( mc2_1410_x );
   }
   else
   {
      /* Explicit comment stating appropiate action */
   }

   if ( mc2_1410_x < 4U )
   {
      use_uint16 ( mc2_1410_x );
   }
   else if ( mc2_1410_x > 4U )
   {
      use_uint16 ( mc2_1410_x );
   }
   else
   {

   }
   /* Not Compliant - No comment or action between {} above */

   if ( mc2_1410_x < 5U )
   {
      use_uint16 ( mc2_1410_x );
   }
   else if ( mc2_1410_x > 5U )
   {
      use_uint16 ( mc2_1410_x );
   }
   else
   {
      ;
   }
   /* Not Compliant - No comment or action between {} above */
}

/* end of mc2_1410.c */
