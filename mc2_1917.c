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
 * 19.17 All #else, #elif and #endif preprocessor directives shall reside in the
 * same file as the #if or #ifdef directive to which they are related.
 */

#include "mc2_types.h"
#include "mc2_header.h"

/* The following included file contains an incomplete
   conditional inclusion - Not Compliant */
#include "mc2_1917.h"

#endif

void mc2_1917 ( void )
{
   int8_t mc2_1917_a = 0;
   use_int8 ( mc2_1917_a );
}

/* end of mc2_1917.c */
