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
 * 19.16 Preprocessing directives shall be syntactically meaningful even when
 * excluded by the preprocessor.
 */

#include "mc2_types.h"
#include "mc2_header.h"

#define mc2_1916a 2

static int8_t mc2_1916_f1 ( void );


static int8_t mc2_1916_f1 ( void )
{
   int8_t x = 0;
#ifndef mc2_1916a
   x = 1;
/* Following directive is NOT COMPLIANT */
#else1
   x = mc2_1916a;
#endif
   return ( x );
}

void mc2_1916 ( void )
{
   int8_t mc2_1916_a = 0;
   use_int8 ( mc2_1916_a );

   mc2_1916_a = mc2_1916_f1 ( );

   use_int8 ( mc2_1916_a );
}

/* end of mc2_1916.c */
