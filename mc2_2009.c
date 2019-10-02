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
 *  20.9  The  input/output library <stdio.h> shall not be used in production code
 */


#include "mc2_types.h"
#include "mc2_header.h"
#include <stdio.h>             /* Not Compliant to include stdio.h */


void mc2_2009 ( void )
{

  (void) printf ( "The library stdio shall not be used\n" ); /* Not Compliant */

}

/* end of mc2_2009.c */
