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
 * 12.6   The operands of logical operators (&&, || and !) should be
 *        effectively Boolean. Expressions that are effectively Boolean
 *        should not be used as operands to operators other than (&&, ||
 *        and !).
 *
 */

#include "mc2_types.h"
#include "mc2_header.h"

void mc2_1206 ( void )
{
   uint16_t mc2_1206_y;
   uint16_t mc2_1206_z;
   uint16_t mc2_1206_x;

   /* It is assumed that bool_t is specified to be a boolean type */
   bool_t mc2_1206_boolean_a;    /* boolean by enforcement */
   bool_t mc2_1206_boolean_b;    /* boolean by enforcement */
   bool_t mc2_1206_boolean_c;    /* boolean by enforcement */

   mc2_1206_boolean_a = get_bool ( );
   mc2_1206_boolean_b = get_bool ( );
   mc2_1206_boolean_c = get_bool ( );

   mc2_1206_x = get_uint16 ( );
   mc2_1206_y = get_uint16 ( );
   mc2_1206_z = get_uint16 ( );

   if ( ( mc2_1206_x & mc2_1206_y ) == 0x42u )      /* Compliant */
   {
      ;
   }

   if ( mc2_1206_boolean_a & mc2_1206_boolean_b  )  /* Not Compliant -
                                     /* bitwise operation on boolean operands */
   {
      ;
   }

   if ( ( mc2_1206_x | mc2_1206_y ) == 0x37u )      /* Compliant */
   {
      ;
   }
   if ( ( (uint16_t) ( ~mc2_1206_x ) ) == 0x25u )   /* Compliant */
   {
      ;
   }

   if ( mc2_1206_x && mc2_1206_y )  /* Not compliant -
                                 /* logical operation on non-boolean operands */
   {
      ;
   }
   if ( mc2_1206_x && ( !mc2_1206_y ) )  /* Not compliant -
                                 /* logical operation on non-boolean operands */
   {
      ;
   }

   mc2_1206_x = ( mc2_1206_y == mc2_1206_z ); /* Not compliant -
                                     /* mc2_1206_x is not effectively boolean */
   use_uint16 ( mc2_1206_x );

   if ( mc2_1206_boolean_a && ( mc2_1206_boolean_b || ( !mc2_1206_boolean_c ) ) )
                                              /* Compliant */
   {
      ;
   }

}

/* end of mc2_1206.c */

