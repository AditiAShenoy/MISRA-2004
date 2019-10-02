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
 * 12.3   The sizeof operator shall not be used on expressions that contain
 *        side effects.
 *
 */

#include "mc2_types.h"
#include "mc2_header.h"

static uint16_t mc2_1203_f ( uint16_t x );

static uint16_t mc2_1203_f ( uint16_t x )
{
  static uint16_t mc2_1203_seed = 0U;

  mc2_1203_seed = get_uint16 ( );
  return x + mc2_1203_seed;
}

void mc2_1203 ( void )
{
   uint16_t mc2_1203_a;
   uint16_t mc2_1203_x;
   volatile uint16_t mc2_1203_v = 5U;

   mc2_1203_a = get_uint16 ( );

   mc2_1203_x = sizeof ( mc2_1203_a = 1234U );             /* Not compliant */
   use_uint16 ( mc2_1203_x );

   mc2_1203_x = sizeof ( mc2_1203_f ( mc2_1203_a ) );      /* Not compliant */
   use_uint16 ( mc2_1203_x );

   mc2_1203_x = sizeof ( mc2_1203_a++ );                   /* Not compliant */
                                                           /* Also Rule 12.13 */
   use_uint16 ( mc2_1203_x );

   mc2_1203_x = sizeof ( mc2_1203_v );                     /* Compliant */

   use_uint16 ( mc2_1203_a );
   use_uint16 ( mc2_1203_x );
   use_uint16 ( mc2_1203_v );
}

/* end of mc2_1203.c */

