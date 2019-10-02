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
#include "mc2_0504_1.h"
#include "mc2_0504_2.h"

static struct n_compliant_tag mc2_0504_2a ( void );

struct compliant_tag mc2_0504_2 ( void )
{
   struct n_compliant_tag c_n_tag;
   struct compliant_tag c_tag2 = { 0 };  /* Compliant inclusion in multiple
                                          * files via header file               */
   c_n_tag = mc2_0504_2a ( );            /* Calling function - internal linkage */
   use_int32 ( c_n_tag.n_tag_component );
   c_n_tag = mc2_0504_3 ( );             /* Calling function - external linkage */
   use_int32 ( c_n_tag.n_tag_component );
   return c_tag2;
}

static struct n_compliant_tag mc2_0504_2a ( void )  /* Not Compliant - tag name */
{                                                   /* used in mc2_0504_1.c     */
   struct n_compliant_tag n_c_tag2 = { 0 };         /* Rule 8.10 Compliance     */
   return n_c_tag2;
}

/* end of mc2_0504_2.c */


