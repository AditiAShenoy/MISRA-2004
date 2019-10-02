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
 * 19.11 All macro identifiers in preprocessor directives shall be defined
 * before use, except in #ifdef and #ifndef preprocessor directives and the
 * defined() operator.
 */

#include "mc2_types.h"
#include "mc2_header.h"

/* Following directive is NOT COMPLIANT */
#if x1 == 0
#define mc2_1911a 0
#else
#define mc2_1911a 1
#endif

#ifdef x2
#define mc2_1911b 0
#else
#define mc2_1911b 1
#endif

#ifndef x3
#define mc2_1911c 0
#else
#define mc2_1911c 1
#endif

#if defined(x4)
#define mc2_1911d 0
#else
#define mc2_1911d 1
#endif

void mc2_1911 ( void )
{
   int8_t mc2_1911_a = 0;
   use_int8 ( mc2_1911_a );
}

/* end of mc2_1911.c */
