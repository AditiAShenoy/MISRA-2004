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
 * 19.1 #include statements in a file should only be preceded by other
 *      preprocessor directives or comments.
 */

#include "mc2_types.h"

/* one of the following two statements is not compliant */

static int32_t mc2_1901_b = 0;

#include "mc2_header.h"

static void mc2_1901_f1 ( void );

static void mc2_1901_f1 ( void )
{
   use_int32 ( mc2_1901_b );
}

void mc2_1901 ( void )
{
   int8_t mc2_1901_a = 0;
   use_int8 ( mc2_1901_a );

   use_int32 ( mc2_1901_b );

   mc2_1901_f1 ( );
}

/* end of mc2_1901.c */
