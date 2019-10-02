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
 * 13.2 Test of a value against zero should be made explicit, unless the
 *      operand is effectively boolean.
 *
 */

#include "mc2_types.h"
#include "mc2_header.h"

void mc2_1302 ( void )
{
   uint16_t mc2_1302_var1;
   uint16_t mc2_1302_var2;

   /* It is assumed that bool_t is specified to be a boolean type */
   bool_t mc2_1302_boolean_a;                 /*  Boolean by enforcement */

   mc2_1302_var1 = get_uint16 ( );
   mc2_1302_var2 = get_uint16 ( );

   if ( mc2_1302_var1 != 0U )                 /* Compliant     */
   {
      if ( mc2_1302_var2 )                    /* Not compliant */
      {
         use_uint16 ( mc2_1302_var1 );
      }
      else
      {
         use_uint16 ( mc2_1302_var2 );
      }
   }

   mc2_1302_boolean_a = get_bool ( );

   if ( mc2_1302_boolean_a )             /* Compliant - Boolean by enforcment */
   {
      ;
   }

}
/* end of mc2_1302.c */
