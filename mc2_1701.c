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
 * 17.1 Pointer arithmetic shall only be applied to pointers that address an
 *      array or array element.
 */


#include "mc2_types.h"
#include "mc2_header.h"



void mc2_1701 ( void )
{
   int16_t int_val = get_int16 ( );
   int16_t * ptr_int;

   ptr_int = &int_val;

   ptr_int ++;                     /* Not Compliant - also Rule 17.4 */
   ptr_int --;                     /* Not Compliant - also Rule 17.4 */
   use_int16 ( ptr_int [ 0 ] );    /* Not Compliant  */

}

/* end of mc2_1701.c */
