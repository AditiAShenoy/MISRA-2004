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
 *  20.3  The validity of of values passed to library
 *        functions shall be checked.
 */

#include "mc2_types.h"
#include "mc2_header.h"
#include <limits.h>
#include <math.h>
#include <stdlib.h>

void mc2_2003 ( void )
{
   float64_t test_val   = 0.1;
   float64_t result     = 0.0;
   int32_t   mc2_2003_c = 0;
   int32_t   mc2_2003_d = 0;

   mc2_2003_c = get_int32 ( );

   if ( mc2_2003_c > INT_MIN )   /* Compliant - checks input range  */
   {
       mc2_2003_d = abs ( mc2_2003_c );
   }
   else
   {
       mc2_2003_d = INT_MAX;
   }

   use_int32 ( mc2_2003_d );

   mc2_2003_c = get_int32 ( );

   mc2_2003_d = abs ( mc2_2003_c );  /* Not Compliant - Rule 20.3 no checking */

   if ( test_val >= 0.0 )
   {
       result = sqrt ( test_val );
   }
   else
   {
      /* error code */
   }

   use_int32   ( mc2_2003_c );
   use_int32   ( mc2_2003_d );
   use_float64 ( test_val   );
   use_float64 ( result     );

}
/* end of mc2_2003.c */
