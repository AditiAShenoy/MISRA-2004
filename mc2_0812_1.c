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
 * 8.12 When an array is declared with external linkage, it's size shall be
 *      stated explicitly or defined implicitly by initialisation.
 */


#include "mc2_types.h"
#include "mc2_header.h"
#include "mc2_0812.h"


int32_t ex_array2 [ ] = { 1, 2, 3 };         /* Compliant */

int32_t ex_array1 [ 5 ] = { 0, 0, 0, 0, 0 }; /* Compliant */
int32_t n_ex_array [ 2 ] = { 1, 1 };         /* Compliant */

void mc2_0812 ( void )
{
   /* Usage */

   ex_array1 [ 1 ]  = get_int32 ( );
   ex_array2 [ 2 ]  = get_int32 ( );
   n_ex_array [ 0 ] = get_int32 ( );

   /* Calling functions with external linkage */

   mc2_0812_2 ( );
}

/* end of mc2_0812_1.c */
