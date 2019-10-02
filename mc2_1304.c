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
 * 13.4 The controlling expression of a for statement shall not contain
 *      any objects of floating type.
 *
 */

#include "mc2_types.h"
#include "mc2_header.h"

void mc2_1304 ( void )
{
   uint16_t  mc2_1304_var1;
   uint16_t  mc2_1304_var2;
   float32_t mc2_1304_var3;
   float32_t mc2_1304_var4;
   float32_t mc2_1304_var5 [ 3 ] = { 1.0F, 2.0F, 3.0F };

   mc2_1304_var2 = get_uint16 ( );
   mc2_1304_var3 = get_float32 ( );

   for ( mc2_1304_var1 = 1U;
         mc2_1304_var1 < mc2_1304_var2;
         mc2_1304_var1++ )                             /* Compliant */
   {
      use_float32 ( mc2_1304_var3 );
   }

   for ( mc2_1304_var4 = 0.0F;
         mc2_1304_var4 < mc2_1304_var3;                /* Not compliant */
         mc2_1304_var4 = mc2_1304_var4 + 1.0F )
   {
      use_float32 ( mc2_1304_var3 );
   }

   for ( mc2_1304_var1 = 0U;
         mc2_1304_var5 [ mc2_1304_var1 ] < mc2_1304_var3;   /* Not compliant */
         mc2_1304_var1++ )
   {
      use_uint16 ( mc2_1304_var1 );
   }
}

/* end of mc2_1304.c */

