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
 * 13.6 Numeric variables being used within a for loop for iteration
 *      counting shall not be modified in the body of the loop.
 *
 */

#include "mc2_types.h"
#include "mc2_header.h"

void mc2_1306 ( void )
{
   uint16_t  mc2_1306_var1;
   uint16_t  mc2_1306_var2;

   mc2_1306_var1 = get_uint16 ( );

   for ( mc2_1306_var2 = 1U;
         ( mc2_1306_var2 < 22U ) && ( mc2_1306_var1 != 8U );
         mc2_1306_var2++ )
   {
      mc2_1306_var2 = mc2_1306_var2 + mc2_1306_var1;   /* Not compliant */
      mc2_1306_var1 = get_uint16 ( );
   }
}

/* end of mc2_1306.c */

