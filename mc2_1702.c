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
 * 17.2 Pointer subtraction shall only be applied to pointers that address
 *      elements of the same array.
 */


#include "mc2_types.h"
#include "mc2_header.h"



void mc2_1702 ( void )
{
   int32_t ptrdiff;

   uint16_t array_16 [ 16 ];
   uint16_t * ptr_a16_0 = &array_16 [ 0 ];
   uint16_t * ptr_a16_5 = &array_16 [ 5 ];

   uint16_t array_8 [ 8 ];
   uint16_t * ptr_a8_0 = &array_8 [ 0 ];

   uint16_t * ptr_uint = get_uint16_ptr ( );

   ptrdiff = ptr_a16_5 - ptr_a16_0;   /* Compliant, but breaks Rule 17.4 */
   use_int32 ( ptrdiff );

   ptrdiff = ptr_a16_5 - ptr_a8_0;    /* Not Compliant - also Rule 17.4 */
   use_int32 ( ptrdiff );

   ptrdiff = ptr_a16_5 - ptr_uint;    /* Not Compliant - also Rule 17.4  */
   use_int32 ( ptrdiff );
}

/* end of mc2_1702.c */

