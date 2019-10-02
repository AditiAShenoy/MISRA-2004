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
 * 12.10   The comma operator shall not be used.
 *
 */

#include "mc2_types.h"
#include "mc2_header.h"

void mc2_1210 ( void )
{
   uint16_t mc2_1210_a;
   uint16_t mc2_1210_b;

   mc2_1210_b = 1u, mc2_1210_a = 1u;   /* Not compliant */

   use_uint16 ( mc2_1210_a );
   use_uint16 ( mc2_1210_b );

   for ( mc2_1210_a = get_uint16 ( ), mc2_1210_b = get_uint16 ( ) ;
         mc2_1210_a < mc2_1210_b ;
         mc2_1210_a ++ , mc2_1210_b -- )
                                /* Not compliant, two cases of comma operator */
   {
     ;
   }

   use_uint16 ( mc2_1210_a );
   use_uint16 ( mc2_1210_b );

}

/* end of mc2_1210.c */

