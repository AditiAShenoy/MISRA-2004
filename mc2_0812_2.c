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

void mc2_0812_2 ( void )         /* Rule 8.10 Compliance */
{
   use_int32 ( ex_array1 [ 1 ] );
   use_int32 ( ex_array2 [ 1 ] );
   use_int32 ( n_ex_array [ 0 ] );
}

/* end of mc2_0812_2.c */
