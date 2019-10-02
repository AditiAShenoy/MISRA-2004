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
 * 14.7   A function shall have a single point of exit at the end of the
 *        function.
 *
 */


#include "mc2_types.h"
#include "mc2_header.h"

static void mc2_1407_b ( void );

void mc2_1407 ( void )
{
   uint16_t mc2_1407_x;

   mc2_1407_b ( );

   mc2_1407_x = get_uint16 ( );

   if ( mc2_1407_x < 1u )
   {
      use_uint16 ( mc2_1407_x );
      return;   /* Not compliant -- two return's */
   }
   return;      /* Not compliant -- two return's */
}

static void mc2_1407_b ( void )
{
   uint16_t mc2_1407_x;

   mc2_1407_x = get_uint16 ( );

   if ( mc2_1407_x < 1u )
   {
      use_uint16 ( mc2_1407_x );
      return;   /* Not compliant -- two return's */
   }
   /* Not compliant -- second point of exit */
}

/* end of mc2_1407.c */
