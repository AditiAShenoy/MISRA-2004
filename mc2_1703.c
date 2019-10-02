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
 * 17.3 >, >=, <, <= shall not be applied to pointer types except where they
 *      point to the same array.
 */


#include "mc2_types.h"
#include "mc2_header.h"


void mc2_1703 ( void )
{
   uint8_t test_result;
   uint8_t index_1 = get_uint8 ( );

   uint16_t array_12 [ 12 ];
   uint16_t * ptr_a12_0 = &array_12 [ 0 ];
   uint16_t * ptr_a12_5 = &array_12 [ 5 ];

   uint16_t array_9 [ 9 ];
   uint16_t * ptr_a9_0 = &array_9 [ 0 ];

   uint16_t * ptr_uint16 = get_uint16_ptr ( );

   while ( index_1 > 12U )
   {
      index_1 = get_uint8 ( );
   }

   if ( ptr_a12_5 > ptr_a12_0 )                   /* Compliant */
   {
      test_result = 1U;
   }
   else if ( ptr_a12_5 <= ptr_a9_0 )              /* Not Compliant */
   {
      test_result = 0U;
   }
   else if ( ( &array_12 [ 12 ] - &array_12 [ index_1 ] ) > 0 )
                                         /* Compliant, but violates Rule 17.4 */
          /* C Standard allows addressing the element one beyond end of array */
   {
      test_result = 1U;
   }
   else if ( ptr_a12_5 >= ptr_uint16 )            /* Not Compliant */
   {
      test_result = 0U;
   }
   else
   {
    test_result = 2U;
   }
   use_uint8 ( test_result );
}

/* end of mc2_1703.c */

