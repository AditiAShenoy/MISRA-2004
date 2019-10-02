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
 * 12.8   The right hand operand of a shift operator shall lie between zero
 *        and one less then the width in bits of the underlying type of the
 *        left hand operand.
 *
 */

#include "mc2_types.h"
#include "mc2_header.h"

void mc2_1208 ( void )
{
   uint8_t  mc2_1208_a;
   uint16_t mc2_1208_b;
   uint32_t mc2_1208_c;

   mc2_1208_a = get_uint8 ( );
   mc2_1208_b = get_uint16 ( );
   mc2_1208_c = get_uint32 ( );

   mc2_1208_a = (uint8_t) (mc2_1208_a << 7u);   /* Compliant */
   use_uint8( mc2_1208_a );
   mc2_1208_a = get_uint8 ( );

   mc2_1208_a = (uint8_t) (mc2_1208_a << 8u);   /* Not compliant */
   use_uint8( mc2_1208_a );
   mc2_1208_a = get_uint8 ( );

   mc2_1208_b = (uint16_t) (mc2_1208_b << 15u);    /* Compliant */
   use_uint16( mc2_1208_b );
   mc2_1208_b = get_uint16 ( );

   mc2_1208_b = (uint16_t) (mc2_1208_b << 16u);   /* Not compliant */
   use_uint16( mc2_1208_b );

   mc2_1208_b = (uint16_t) ((uint16_t) mc2_1208_a << 15u);  /* Compliant */
   use_uint16( mc2_1208_b );
   mc2_1208_b = get_uint16 ( );

   mc2_1208_c = (uint32_t) (mc2_1208_c << 31u);   /* Compliant */
   use_uint32( mc2_1208_c );
   mc2_1208_c = get_uint32 ( );

   mc2_1208_c = (uint32_t) (mc2_1208_c << 32u);   /* Not compliant */
   use_uint32( mc2_1208_c );

   mc2_1208_c = (uint32_t) ((uint32_t) mc2_1208_b << 31u); /* Compliant */
   use_uint32( mc2_1208_c );

}

/* end of mc2_1208.c */

