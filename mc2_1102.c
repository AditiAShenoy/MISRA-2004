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
 * 11.2 Conversions shall not be performed between a pointer to object
 *      and any type other than an integral type, another pointer to
 *      object type or a pointer to void.
 */

/*
 * Note:
 * See mc2_1103.c for conversions of pointer type to integral type
 * See mc2_1104.c for conversions between different pointer to object types
 *
 */

#include "mc2_types.h"
#include "mc2_header.h"

void mc2_1102 ( void )
{
   float32_t float32_1102;
   float64_t float64_1102;
   float32_t *pfloat32 = get_float32_ptr ( );
   void *void_ptr = ( void * ) get_int32_ptr ( );   /* Compliant */

   float32_1102 = ( float32_t ) pfloat32;           /* Not Compliant */
   float64_1102 = ( float64_t ) pfloat32;           /* Not Compliant */

   use_float32 ( float32_1102 );
   use_float64 ( float64_1102 );

   float32_1102 = ( float32_t ) void_ptr;           /* Not Compliant */
   float64_1102 = ( float64_t ) void_ptr;           /* Not Compliant */

   use_float32 ( float32_1102 );
   use_float64 ( float64_1102 );

}

/* end of mc2_1102.c */
