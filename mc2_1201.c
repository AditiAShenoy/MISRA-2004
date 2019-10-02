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
 * 12.1   Limited dependence should be placed on C's operator
 *        precedence rules in expressions.
 *
 */

#include "mc2_types.h"
#include "mc2_header.h"

static uint16_t mc2_1201_f ( uint16_t mc2_1201_p1, uint16_t mc2_1201_p2 );

static uint16_t mc2_1201_f ( uint16_t mc2_1201_p1, uint16_t mc2_1201_p2 )
{
   return ( mc2_1201_p1 + mc2_1201_p2 );
}

void mc2_1201 ( void )
{
   uint16_t mc2_1201_a;
   uint16_t mc2_1201_b;
   uint16_t mc2_1201_c;
   uint16_t mc2_1201_d;
   int16_t  mc2_1201_e;
   uint16_t mc2_1201_x;
   int16_t  mc2_1201_y;
   bool_t   mc2_1201_j;
   bool_t   mc2_1201_k;
   bool_t   mc2_1201_l;

   mc2_1201_a = get_uint16 ( );
   mc2_1201_b = get_uint16 ( );
   mc2_1201_c = get_uint16 ( );
   mc2_1201_d = get_uint16 ( );
   mc2_1201_x = get_uint16 ( );
   mc2_1201_e = get_int16 ( );
   mc2_1201_y = get_int16 ( );
   mc2_1201_j = get_bool ( );
   mc2_1201_k = get_bool ( );
   mc2_1201_l = get_bool ( );

   mc2_1201_x = mc2_1201_a + mc2_1201_b;         /* Compliant       */
   use_uint16 ( mc2_1201_x );

   mc2_1201_x = ( mc2_1201_a + mc2_1201_b );     /* () not required */
   use_uint16 ( mc2_1201_x );

   mc2_1201_y = mc2_1201_e * -1;                 /* Compliant       */
   use_int16 ( mc2_1201_y );

   mc2_1201_y = mc2_1201_e * ( -1 );             /* () not required */
   use_int16 ( mc2_1201_y );

   mc2_1201_x = mc2_1201_a + mc2_1201_b + mc2_1201_c;
                                     /* Compliant, but care needed  */
   use_uint16 ( mc2_1201_x );

   mc2_1201_x = mc2_1201_f ( mc2_1201_a + mc2_1201_b, mc2_1201_c );
                                     /* Compliant - no () required for a + b  */
   use_uint16 ( mc2_1201_x );

   mc2_1201_x = ( mc2_1201_a == mc2_1201_b )
                     ? mc2_1201_a : ( mc2_1201_a - mc2_1201_b ); /* Compliant */

   if ( mc2_1201_j && mc2_1201_k && mc2_1201_l ) /* Compliant */
   {
       use_uint16 ( mc2_1201_x );
   }

   if ( mc2_1201_j && mc2_1201_k || mc2_1201_l ) /* Not compliant */
   {
       use_uint16 ( mc2_1201_x );
   }

   mc2_1201_x = mc2_1201_a + mc2_1201_b - mc2_1201_c; /* Not compliant */
   use_uint16 ( mc2_1201_x );

   mc2_1201_x = ( mc2_1201_a + mc2_1201_b ) - ( mc2_1201_c + mc2_1201_d );
   use_uint16 ( mc2_1201_x );

   mc2_1201_x = ( mc2_1201_a * 3u ) + mc2_1201_c + mc2_1201_d;
   use_uint16 ( mc2_1201_x );

   mc2_1201_x = ( uint16_t ) mc2_1201_a + mc2_1201_b;
                          /* no need for outer brackets on cast ((uint16_t) a)
                             note: cast is redundent in this case             */
   use_uint16 ( mc2_1201_x );
}

/* end of mc2_1201.c */
