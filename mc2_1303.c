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
 * 13.3 Floating-point expressions shall not be tested for equality or
 *      inequality.
 *
 */

#include "mc2_types.h"
#include "mc2_header.h"

void mc2_1303 ( void )
{
   float32_t mc2_1303_var1;
   float32_t mc2_1303_var2;
   float32_t mc2_1303_var3;

   mc2_1303_var1 = get_float32 ( );
   mc2_1303_var2 = get_float32 ( );
   mc2_1303_var3 = get_float32 ( );

   if ( mc2_1303_var1 == mc2_1303_var2 )            /* Not compliant */
   {
      if ( mc2_1303_var3 == 0.0f )                  /* Not compliant */
      {
         use_float32 ( mc2_1303_var1 );
      }
      else
      {
         use_float32 ( mc2_1303_var2 );
      }
   }
   else
   {
      if ( mc2_1303_var1 > mc2_1303_var2 )          /* Compliant */
      {
         if ( mc2_1303_var3 >= mc2_1303_var2 )      /* Compliant */
         {
            use_float32 ( mc2_1303_var1 );
         }
         else
         {
            use_float32 ( mc2_1303_var2 );
         }
      }
      else
      {
         if (    ( mc2_1303_var1 < mc2_1303_var3 )
              || ( mc2_1303_var1 > mc2_1303_var3 ) )  /* Not compliant */
         {
            use_float32 ( mc2_1303_var1 );
         }
         else
         {
            use_float32 ( mc2_1303_var2 );
         }
      }
   }

   if (    ( mc2_1303_var1 <= mc2_1303_var3 )
        && ( mc2_1303_var1 >= mc2_1303_var3 ) )      /* Not compliant */
   {
      use_float32 ( mc2_1303_var1 );
   }
   else
   {
      use_float32 ( mc2_1303_var2 );
   }
}

/* end of mc2_1303.c */

