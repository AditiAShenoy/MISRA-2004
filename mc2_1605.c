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
 * 16.5 Functions with no parameters shall be declared with parameter type
 *      void.
 */

#include "mc2_types.h"
#include "mc2_header.h"

/* void missing */
static void mc2_1605a ( );       /* Not Compliant */

void mc2_1605 ( void )
{
   mc2_1605a ( );                /* May cause a Rule 8.1 violation */
}

static void mc2_1605a ( )
{
   use_int32 ( 0 );
}

/* end of mc2_1605.c */

