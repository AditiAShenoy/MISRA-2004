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
 * 19.9 Arguments to a function-like macro shall not contain tokens that look
 * like preprocessing directives.
 */

#include "mc2_types.h"
#include "mc2_header.h"

#define SUM(A,B,C) ((A) + (B) + (C)) /* Violates Rule 17.4 */

void mc2_1909 ( void )
{
   int16_t mc2_1909_s16a;
   int16_t mc2_1909_s16b = get_int16 ( );
   int16_t mc2_1909_s16c = get_int16 ( );

   mc2_1909_s16a = SUM( 5,
#ifdef SW
                        mc2_1909_s16b,
#else
                        mc2_1909_s16c,
#endif
                        0 );

   use_int16 ( mc2_1909_s16a );
   use_int16 ( mc2_1909_s16b );
   use_int16 ( mc2_1909_s16c );

}

/* end of mc2_1909.c */
