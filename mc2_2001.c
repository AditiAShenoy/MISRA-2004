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
 *  20.1  Reserved identifiers, macros and functions in the standard
 *         library shall not be defined, redefined or undefined.
 */

#include "mc2_types.h"
#include "mc2_header.h"


#undef __LINE__                /* Not Compliant Rule  19.6 */
#undef __STDC__                /* Not Compliant rule  19.6 */


#define __LINE__ 1             /* Not Compliant */
#define __FILE__ 2             /* Not Compliant */
#define __DATE__ 3             /* Not Compliant */
#define __TIME__ 4             /* Not Compliant */
#define __STDC__ 5             /* Not Compliant */
#define errno    6             /* Not Compliant */
#define assert   7             /* Not Compliant */
#define _Singleunderscore   8  /* Not Compliant */
#define __doubleunderscore  9  /* Not Compliant */
#define _singleunderscore  10  /* Not Compliant */

#define isillegal  11          /* Not Compliant */
#define total    12            /* Not Compliant */
  /* Not Compliant ref in C std 7.13   specifically */
  /* 7.13.3 to* where * is a lower case letter */

void mc2_2001( void )
{
  ; /* empty function */

}


/* end of mc2_2001.c */
