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
 *  20.4  Dynamic heap memory shall not be used.
 */

#include "mc2_types.h"
#include "mc2_header.h"
#include "stdlib.h"

void mc2_2004 ( void )
{

  char_t  *  mc2_2004_p ;

  mc2_2004_p = ( char_t * ) malloc ( 11U );  /* Not Compliant: use of malloc  */

  (void) realloc ( mc2_2004_p, 20U );        /* Not Compliant: use of realloc */

  free ( mc2_2004_p );                      /* Not Compliant: use of free    */

}

/* end of mc2_2004.c */
