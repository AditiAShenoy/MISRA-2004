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
 * 13.7 Boolean operations whose results are invariant shall not be
 *      permitted.
 *
 */

#include "mc2_types.h"
#include "mc2_header.h"

void mc2_1307 ( void )
{
   uint16_t  mc2_1307_var1;
   int8_t    mc2_1307_var2;
   enum mc2_1307_tag1
   {
      RED,
      BLUE,
      GREEN
   }
   mc2_1307_var3 = GREEN;

   mc2_1307_var1 = get_uint16 ( );
   mc2_1307_var2 = get_int8 ( );

   /* mc2_1307_var1 is always >= 0 */
   if ( mc2_1307_var1 < 0U )            /* Not compliant */
   {
      use_uint16 ( mc2_1307_var1 );
   }

   /* Always true */
   if ( mc2_1307_var1 <= 0xffffU )    /* Not compliant */
   {
      use_uint16 ( mc2_1307_var1 );
   }
   else
   {
      use_uint16 ( mc2_1307_var1 );
   }


   /* Always true */
   if ( mc2_1307_var2 < 130 )          /* Not compliant */
   {

      /* Always false */
      if ( ( mc2_1307_var2 < 10 ) &&
           ( mc2_1307_var2 > 20 ) )        /* Not compliant */
      {
         use_uint16 ( mc2_1307_var1 );
      }
      else
      {

         /* Always true */
         if ( ( mc2_1307_var2 < 10 ) ||
              ( mc2_1307_var2 > 5 ) )       /* Not compliant */
         {
            use_uint16 ( mc2_1307_var1 );
         }
         else
         {
            use_uint16 ( mc2_1307_var1 );
         }
      }
   }
   else
   {
      use_uint16 ( mc2_1307_var1 );
   }


   if ( mc2_1307_var2 > 10 )
   {

      /* Always true because mc2_1307_var2 is not volatile */
      if ( mc2_1307_var2 > 5 ) /* Not compliant */
      {
         use_uint16 ( mc2_1307_var1 );
      }
      else
      {
         use_uint16 ( mc2_1307_var1 );
      }
   }
   else
   {
      use_uint16 ( mc2_1307_var1 );
   }

   /* Always true due to previous assignment */
   if ( mc2_1307_var3 <= GREEN ) /* Not compliant */
   {
      use_uint16 ( mc2_1307_var1 );
   }
   else
   {
      use_uint16 ( mc2_1307_var1 );
   }
}

/* end of mc2_1307.c */

