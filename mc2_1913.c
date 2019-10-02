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
 * 19.13 The # and ## preprocessor operators should not be used.
 */

#include "mc2_types.h"
#include "mc2_header.h"

/* The following are not compliant */

#define mc2_1913A(x,y) (#x = (y))
#define mc2_1913B(x,y) (x##y = 0)

void mc2_1913 ( void )
{
   int8_t mc2_1913_a = 0;
   use_int8 ( mc2_1913_a );
}

/* end of mc2_1913.c */
