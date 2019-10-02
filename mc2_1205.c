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
 * 12.5   The operands of a logical && or || shall be primary-expressions.
 *
 */

/*
 * This file may issue Rule 12.1 warnings, but 12.5 messages are preferred
 * as Rule 12.5 is Required while 12.1 is Advisory.
 */

#include "mc2_types.h"
#include "mc2_header.h"

static uint16_t mc2_1205_global;

static bool_t mc2_1205_f ( uint16_t x );

static bool_t mc2_1205_f ( uint16_t x )
{
   mc2_1205_global = 1u;
   return ( x == mc2_1205_global );
}

void mc2_1205 ( void )
{
   uint16_t mc2_1205_y;
   uint16_t mc2_1205_z;
   uint16_t mc2_1205_x;
   /* It is assumed that bool_t is specified to be a boolean type */
   bool_t mc2_1205_boolean_a;                /* boolean by enforcement */
   bool_t mc2_1205_boolean_b;                /* boolean by enforcement */
   bool_t mc2_1205_boolean_c;                /* boolean by enforcement */

   mc2_1205_boolean_a = get_bool ( );
   mc2_1205_boolean_b = get_bool ( );
   mc2_1205_boolean_c = get_bool ( );
   mc2_1205_z = get_uint16 ( );
   mc2_1205_y = get_uint16 ( );
   mc2_1205_x = get_uint16 ( );

   mc2_1205_boolean_a = ( mc2_1205_x == 0u && mc2_1205_boolean_a ); /* Not compliant */

   use_bool ( mc2_1205_boolean_a );

   mc2_1205_boolean_a = ( ( mc2_1205_x == 0u ) && mc2_1205_boolean_a );

   if ( mc2_1205_x == 0u && mc2_1205_boolean_a ) /* Not compliant */
   {
      use_bool ( mc2_1205_boolean_a );
   }
   if ( ( mc2_1205_x == 0u ) && mc2_1205_boolean_a ) /* Compliant: x == 0 primary */
   {
      use_bool ( mc2_1205_boolean_a );
   }

   /* Compliant : allowed, mc2_1205_boolean_a, mc2_1205_boolean_b and
    * mc2_1205_boolean_c are Boolean and same operator                */
   if ( mc2_1205_boolean_a || mc2_1205_boolean_b || mc2_1205_boolean_c )
   {
      use_bool ( mc2_1205_boolean_a );
   }

                   /* Compliant: ( mc2_1205_boolean_b && mc2_1205_boolean_c )
                    * is primary */
   if ( mc2_1205_boolean_a || ( mc2_1205_boolean_b && mc2_1205_boolean_c ) )
   {
      use_bool ( mc2_1205_boolean_a );
   }

   if ( mc2_1205_boolean_a &&  !mc2_1205_boolean_b ) /* Not compliant */
   {
      use_bool ( mc2_1205_boolean_a );
   }
   if ( mc2_1205_boolean_a && ( !mc2_1205_boolean_b ) ) /* Compliant: */
                           /* ( !mc2_1205_boolean_b ) is primary */
   {
      use_bool ( mc2_1205_boolean_a );
   }

   if ( mc2_1205_f ( mc2_1205_y ) && mc2_1205_boolean_a ) /* Not compliant */
   {
      use_bool ( mc2_1205_boolean_a );
   }
   if ( ( mc2_1205_f ( mc2_1205_y ) ) && mc2_1205_boolean_a )
          /* Compliant: function call is primary */
   {
      use_bool ( mc2_1205_boolean_a );
   }

   if ( ( mc2_1205_x > 0u ) && ( mc2_1205_y > 0u ) && ( mc2_1205_z > 0u ) )
                           /* Compliant */
   {
      use_bool ( mc2_1205_boolean_a );
   }

   if ( ( mc2_1205_x > 0u ) && ( mc2_1205_y > 0u ) || ( mc2_1205_z > 0u ) )
                           /* Not Compliant */
   {
      use_bool ( mc2_1205_boolean_a );
   }
   if ( ( mc2_1205_x > 0u ) && ( ( mc2_1205_y > 0u ) || ( mc2_1205_z > 0u ) ) )
                           /* Compliant: extra () used */
   {
      use_bool ( mc2_1205_boolean_a );
   }
   if ( mc2_1205_boolean_a || mc2_1205_boolean_b && mc2_1205_boolean_c )
                           /* Not Compliant */
   {
      use_bool ( mc2_1205_boolean_a );
   }

   use_uint16 ( mc2_1205_global );
}

/* end of mc2_1205.c */

