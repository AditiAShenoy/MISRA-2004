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
 * 11.4 A cast should not be performed between a pointer to object type
 *      and a different pointer to object type.
 *
 */

#include "mc2_types.h"
#include "mc2_header.h"


void mc2_1104 ( void )
{
   int32_t *int32_pointer = get_int32_ptr ( );
   int16_t *int16_pointer;
   int8_t *int8_pointer;
   float32_t *float32_pointer;


   int16_pointer = ( int16_t * ) int32_pointer;        /* Not Compliant */
   int8_pointer = ( int8_t * ) int32_pointer;          /* Not Compliant */
   float32_pointer = ( float32_t * ) int32_pointer;    /* Not Compliant */


   use_int16_ptr ( int16_pointer );
   use_int8_ptr ( int8_pointer );
   use_float32_ptr ( float32_pointer );
}


/* end of mc2_1104.c */
