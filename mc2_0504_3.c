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
 * 5.4 A tag name shall be a unique identifier.
 */


#include "mc2_types.h"
#include "mc2_header.h"
#include "mc2_0504_2.h"

struct n_compliant_tag mc2_0504_3 ( void )    /* Not Compliant - tag name */
{                                             /* used in mc2_0504_1.c     */
   struct n_compliant_tag n_c_tag3 = { 0 };   /* Complying with rule 8.10 */
   return n_c_tag3;
}

/* end of mc2_0504_3.c */
