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
 * 13.1 Assignment operators shall not be used in expressions that yield
 *      a boolean value.
 *
 */

#include "mc2_types.h"
#include "mc2_header.h"

void mc2_1301 ( void )
{
   uint16_t mc2_1301_var1;
   uint16_t mc2_1301_var2;

   mc2_1301_var1 = get_uint16 ( );
   mc2_1301_var2 = mc2_1301_var1;                 /* Compliant */

   if ( mc2_1301_var2 == 0U )                     /* Compliant */
   {
      if ( mc2_1301_var2 = mc2_1301_var1 )        /* Not compliant - also 13.2*/
      {
         use_uint16 ( mc2_1301_var1 );
      }
      else
      {
         use_uint16 ( mc2_1301_var2 );
      }
   }
   else
   {
      /* Boolean by construct - using != */
      if ( ( mc2_1301_var2 = mc2_1301_var1 ) != 0U )  /* Not Compliant */
      {
         use_uint16 ( mc2_1301_var1 );
      }
      else
      {
         use_uint16 ( mc2_1301_var2 );
      }
   }
}

/* end of mc2_1301.c */

