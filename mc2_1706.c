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
 * 17.6 The address of an object with automatic storage shall not be
 *      assigned to another object that may persist after the first object has
 *      ceased to exist.
 */

#include <stdlib.h>
#include "mc2_types.h"
#include "mc2_header.h"

static int8_t * mc2_1706_1 ( int16_t ** mc2_1706ppi );

static int8_t * mc2_1706_1 ( int16_t ** mc2_1706ppi )
{
   static int8_t * mc2_1706_ptr1 = NULL;
   int8_t * mc2_1706_ptr2;
   int8_t local_auto;
   int16_t local_auto2;

   local_auto2 = get_int16 ( );
   use_int8_ptr ( mc2_1706_ptr1 );

   mc2_1706_ptr1 = &local_auto;          /* Not Compliant */

   {
       int8_t mc2_1706_i = get_int8 ( ); /* Nested block scope declaration */

       mc2_1706_ptr2 = & mc2_1706_i;     /* Not Compliant */
       use_int8 ( mc2_1706_i );
   }

   *mc2_1706ppi = & local_auto2;         /* Not Compliant */

   use_int8_ptr ( mc2_1706_ptr2 );
   use_int16 ( local_auto2 );

   return & local_auto;                  /* Not Compliant */
}


void mc2_1706 ( void )
{
   int16_t * mc2_1706_ptr3;

   use_int8_ptr ( mc2_1706_1 ( &mc2_1706_ptr3 ) );
   use_int16_ptr ( mc2_1706_ptr3 );
}

/* end of mc2_1706.c */
