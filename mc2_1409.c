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
 * 14.9   An if (expression) construct shall be followed by a compound
 *        statement. The else keyword shall be followed by either a
 *        compound statement or another if statement.
 *
 */


#include "mc2_types.h"
#include "mc2_header.h"

void mc2_1409 ( void )
{
   uint16_t mc2_1409_x;

   mc2_1409_x = get_uint16 ( );

   if ( mc2_1409_x < 1U )
      use_uint16 ( mc2_1409_x );   /* Not compliant */
   else if ( mc2_1409_x > 1U )
      use_uint16 ( mc2_1409_x );   /* Not compliant */
   else
      use_uint16 ( mc2_1409_x );   /* Not compliant */

   if ( mc2_1409_x < 1U )
   {
      use_uint16 ( mc2_1409_x );   /* Compliant */
   }
   else if ( mc2_1409_x > 1U )
   {
      use_uint16 ( mc2_1409_x );   /* Compliant */
   }
   else
   {
      use_uint16 ( mc2_1409_x );   /* Compliant */
   }

}

/* end of mc2_1409.c */
