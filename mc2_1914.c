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
 * 19.14 The defined preprocessor operator shall only be used in one of the two
 * standard forms.
 */

#include "mc2_types.h"
#include "mc2_header.h"

#if defined(MC2_1914_H)
#define MC2_1914_H1_ 0
#endif

#if defined MC2_1914_H
#define MC2_1914_H2_ 0
#endif

/* Following directive is not compliant */
#if defined( MC2_1914_H > 0)
#define MC2_1914_H3_ 0
#endif

void mc2_1914 ( void )
{
   int8_t mc2_1914_a = 0;
   use_int8 ( mc2_1914_a );
}

/* end of mc2_1914.c */
