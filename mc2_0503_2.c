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
 * 5.3 A typedef name shall be a unique identifier.
 */

#include "mc2_types.h"
#include "mc2_header.h"
#include "mc2_0503.h"

typedef int32_t function53;    /* Not Compliant -
                                  Clashes with function in other file */

compliant_type mc2_0503_2 ( void )
{
   compliant_type still_type_compliant;    /* Compliant inclusion in multiple */
                                           /* files via header file, Rule 8.8 */
   typedef int8_t unique_type1;            /* Not Compliant */

   function53 typedef_fun = get_int32 ( ); /* Not Compliant */
   unique_type1 n_u_t1 = get_int8 ( );
   still_type_compliant = get_uint8 ( );

   use_int32 ( typedef_fun );
   use_int8 ( n_u_t1 );

   return still_type_compliant;
}

/* end of mc2_0503_2.c */
