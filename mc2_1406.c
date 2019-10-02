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
 * 14.6  For any iteration statement there shall be at most one break
 *       statement used for loop termination.
 *
 */


#include "mc2_types.h"
#include "mc2_header.h"

void mc2_1406 ( void )
{
   uint16_t mc2_1406_x;
   uint16_t mc2_1406_y;

   mc2_1406_y = get_uint16 ( );

   for ( mc2_1406_x = 1U; mc2_1406_x < 4U; mc2_1406_x++ )
   {
      if ( mc2_1406_x > get_uint16 ( ) )
      {
         use_uint16 ( mc2_1406_y );
         break;             /* Compliant -- only one break in loop */
      }
   }

   for ( mc2_1406_x = 1U; mc2_1406_x < 3U; mc2_1406_x++ )
   {
      if ( mc2_1406_x > get_uint16 ( ) )
      {
         use_uint16 ( mc2_1406_y );
         break;             /* Not compliant -- two breaks in loop */
      }
      else if ( mc2_1406_x > get_uint16 ( ) )
      {
         use_uint16 ( mc2_1406_y );
         break;             /* Not compliant -- two breaks in loop */
      }
      else
      {
         use_uint16 ( mc2_1406_y );
      }
   }
}

/* end of mc2_1406.c */
