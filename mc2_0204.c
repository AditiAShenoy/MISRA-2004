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
 * 2.4 Sections of code should not be "commented out".
 */

#include "mc2_types.h"
#include "mc2_header.h"


void mc2_0204 ( void )
{
   /* The following comment is not compliant */
/*
   use_int32 ( 0 );
*/
   use_int32 ( 1 );
}

/* end of mc2_0204.c */
