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
 * 17.4 Array indexing shall be the only allowed form of pointer arithmetic
 */


#include "mc2_types.h"
#include "mc2_header.h"

static void mc2_1704_1 ( uint8_t * ptr1, uint8_t ptr2 [ ] );

static void mc2_1704_1 ( uint8_t * ptr1, uint8_t ptr2 [ ] )
{
   uint8_t index = 0U;
   uint8_t * ptr3;
   uint8_t * ptr4;

   *ptr1 = 0U;

   ptr1 ++;             /* Not Compliant */
   ptr1 = ptr1 + 5;     /* Not Compliant */
   ptr1 [ 5 ] = 0U;     /* Not Compliant - ptr1 was not declared as an array */
   ptr3 = &ptr1 [ 5 ];  /* Not Compliant - ptr1 was not declared as an array */

   ptr2 [ 0 ] = 0U;     /* Compliant */
   index = index + 5U;
   ptr2 [ index ] = 0U; /* Compliant */
   ptr4 = &ptr2 [ 5 ];  /* Compliant */

   use_uint8 ( * ptr3 );
   use_uint8 ( * ptr4 );
}


void mc2_1704 ( void )
{
   uint8_t arr1 [ 16 ];
   uint8_t arr2 [ 16 ];
   int8_t arr [ 10 ] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
   int8_t * ptr_arr;

   mc2_1704_1 ( arr1, arr2 );
   mc2_1704_1 ( &arr1 [ 4 ], &arr2 [ 4 ] );

   ptr_arr = arr;
   * ( ptr_arr+5 ) = 0;       /* Not Compliant */
   ptr_arr [ 5 ] = 0;         /* Not Compliant */

   use_int8 ( ptr_arr[ 5 ] ); /* Not Compliant */
}

/* end of mc2_1704.c */

