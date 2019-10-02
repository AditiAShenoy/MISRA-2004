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
 * 8.9 An identifier with external linkage shall have exactly one external
 *     definition.
 */

#include "mc2_types.h"
#include "mc2_header.h"
#include "mc2_0809.h"

int32_t two_different_definitions = 2;   /* Not Compliant - two definitions */
void two_identical_definitions ( void )  /* Not Compliant - two definitions */
{
   use_int32 ( two_different_definitions );
}

void mc2_0809_2 ( void )
{
   two_identical_definitions ( );       /* Rule 8.10 Compliance */
}

/* end of mc2_0809_2.c */
