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
 * 12.4   The right hand operand of a logical && or || operator shall not
 *        contain side effects.
 *
 */

/*
 * This file also contains violations of Rules 12.13
 */

#include "mc2_types.h"
#include "mc2_header.h"

static uint16_t mc2_1204_global;

static uint16_t mc2_1204_f ( uint16_t x );
static uint16_t mc2_1204_g ( uint16_t x );

static uint16_t mc2_1204_f ( uint16_t x )
{
   mc2_1204_global = 1u;
   return x;
}

static uint16_t mc2_1204_g ( uint16_t x )
{
   return x;
}

void mc2_1204 ( void )
{
   uint16_t mc2_1204_a;
   uint16_t mc2_1204_i;
   uint16_t mc2_1204_z;
   uint16_t mc2_1204_x;
   /* It is assumed that bool_t is specified to be a boolean type */
   bool_t mc2_1204_a_boolean;
   volatile uint16_t mc2_1204_v;

   mc2_1204_a = get_uint16 ( );
   mc2_1204_z = get_uint16 ( );
   mc2_1204_i = get_uint16 ( );
   mc2_1204_x = get_uint16 ( );
   mc2_1204_v = get_uint16 ( );

   mc2_1204_a_boolean =
          ( (mc2_1204_a == 0U) && ( mc2_1204_x == mc2_1204_i++ ) );  /* Not compliant */

   if ( ( mc2_1204_a == 0U ) && ( mc2_1204_x == mc2_1204_i++ ) )/* Not compliant */
   {
      mc2_1204_i++;
   }

   if ( mc2_1204_a_boolean && ( mc2_1204_x == mc2_1204_i++ ) ) /* Not compliant */
   {
      mc2_1204_i++;
   }

   mc2_1204_a_boolean =
       (    (mc2_1204_a == 0U)
         && ( mc2_1204_z == mc2_1204_f ( mc2_1204_x ) ) ); /* Not compliant */
          /* mc2_1204_f ( mc2_1204_x ) has side effects */

   if ( mc2_1204_a_boolean
        && ( mc2_1204_z == mc2_1204_f ( mc2_1204_x ) ) ) /* Not compliant */
          /* mc2_1204_f ( mc2_1204_x ) has side effects */
   {
      mc2_1204_i++;
   }

   mc2_1204_a_boolean =
       ( ( mc2_1204_a == 0U ) && ( mc2_1204_z == mc2_1204_g ( mc2_1204_x ) ) );
          /* Compliant: mc2_1204_g ( mc2_1204_x ) does not have side effects */

   if ( mc2_1204_a_boolean && ( mc2_1204_z == mc2_1204_g ( mc2_1204_x ) ) )
          /* Compliant: mc2_1204_g ( mc2_1204_x ) does not have side effects */
   {
      mc2_1204_i++;
   }
   mc2_1204_a_boolean =
       ( ( mc2_1204_i == 0U ) && ( mc2_1204_v == mc2_1204_i ) ); /* Not compliant */

   if ( mc2_1204_a_boolean && ( mc2_1204_v == mc2_1204_i) )     /* Not compliant */
   {
      mc2_1204_i++;
   }

   use_uint16 ( mc2_1204_i );
   use_uint16 ( mc2_1204_global );
}

/* end of mc2_1204.c */

