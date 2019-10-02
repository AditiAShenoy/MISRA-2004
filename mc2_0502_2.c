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
 * 5.2 Identifiers in an inner scope shall not use the same name as an
 *     identifier in an outer scope, and therefore hide that identifier.
 */

#include "mc2_types.h"
#include "mc2_header.h"
#include "mc2_0502.h"

int32_t local_hide_extern = 1;

void mc2_0502_2 ( void )
{
   local_hide_extern++;
   use_int32 ( local_hide_extern );
}

/* end of mc2_0502_2.c */
