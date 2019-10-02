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
 * 14.5 The continue statement shall not be used.
 *
 */


#include "mc2_types.h"
#include "mc2_header.h"

void mc2_1405 ( void )
{
   uint16_t mc2_1405_x;
   uint16_t mc2_1405_y = 0U;

   for ( mc2_1405_x = 0u; mc2_1405_x < 3u; mc2_1405_x++ )
   {
      if ( mc2_1405_x < 2u )
      {
         use_uint16 ( mc2_1405_x );
         continue;                   /* Not compliant */
      }
      mc2_1405_y += mc2_1405_x;
   }
   use_uint16 ( mc2_1405_y );
}

/* end of mc2_1405.c */
