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
 * 6.3 Typedefs that indicate size and signedness should be used in place of
 *     the basic types.
 */


#include "mc2_types.h"   /* Compliant */
#include "mc2_header.h"

void mc2_0603 ( void )
{
   char character63;     /* Not Compliant */
   int integer63;        /* Not Compliant */
   typedef int my_int;   /* Not Compliant - name doesn't
                            indicate size or signedness  */

   /* Usage */

   my_int my_int63 = get_int32 ( );
   character63     = get_char  ( );
   integer63       = get_int32 ( );
   use_int32 ( my_int63 );
   use_char ( character63 );
   use_int32 ( integer63 );
}

/* end of mc2_0603.c */
