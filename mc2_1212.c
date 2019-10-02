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
 * 12.12   The underlying bit representations of floating-point values
 *         shall not be used.
 */

#include "mc2_types.h"
#include "mc2_header.h"

void mc2_1212 ( void )
{
   float32_t mc2_1212_b;

   uint32_t mc2_1212_c;

   union /* use of union is also a violation of 18.4 */
   {
      float32_t real;
      uint32_t decimal;
   } mc2_1212_a;

   mc2_1212_a.decimal = get_uint32 ( );
   use_uint32 ( mc2_1212_a.decimal );

   mc2_1212_a.real = get_float32 ( );
   use_float32 ( mc2_1212_a.real );

   mc2_1212_a.decimal ++;     /* Not compliant */

   use_uint32 ( mc2_1212_a.decimal );

   mc2_1212_b = get_float32 ( );

   mc2_1212_c = * (uint32_t *) &mc2_1212_b; /* Not compliant - also violates
                                               Rule 11.4 */

   use_uint32 ( mc2_1212_c );
}

/* end of mc2_1212.c */

