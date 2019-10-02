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
 * 13.5 The three expressions of a for statement shall be concerned only
 *      with loop control.
 *
 */

#include "mc2_types.h"
#include "mc2_header.h"

void mc2_1305 ( void )
{
   uint16_t  mc2_1305_var1;
   uint16_t  mc2_1305_var2;

   mc2_1305_var1 = get_uint16 ( );

   /* Not compliant */
   for ( mc2_1305_var2 = get_uint16 ( );
         mc2_1305_var1 < 22U;
         mc2_1305_var1++ )
   {
      use_uint16 ( mc2_1305_var2 );
   }

   /* Not compliant */
   for ( mc2_1305_var2 = get_uint16 ( );
         mc2_1305_var2 <= get_uint16 ( );
         mc2_1305_var1++ )
   {
      use_uint16 ( mc2_1305_var2 );

   }

   /* Not compliant - may also get 13.6 */
   for ( mc2_1305_var2 = get_uint16 ( );
         mc2_1305_var1 < 48U;
         mc2_1305_var2++ )
   {
      use_uint16 ( mc2_1305_var2 );
      mc2_1305_var1++;
   }

   /* Compliant */
   mc2_1305_var2 = get_uint16 ( );
   for ( ;
         mc2_1305_var2 < 24U;
         mc2_1305_var2++ )
   {
      use_uint16 ( mc2_1305_var2 );
   }
}

/* end of mc2_1305.c */

