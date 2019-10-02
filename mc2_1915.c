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
 * 19.15 Precautions shall be taken in order to prevent the contents of a
 * header file being included twice.
 */

#include "mc2_types.h"
#include "mc2_header.h"

/* Following header file contains no multiple include protection */
#include "mc2_1915.h"

void mc2_1915 ( void )
{
   int8_t mc2_1915_a = 0;
   use_int8 ( mc2_1915_a );
}

/* end of mc2_1915.c */
