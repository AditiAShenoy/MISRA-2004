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
 * 9.1 All automatic variables shall have been assigned a value before
 *     being used.
 */

#include "mc2_types.h"
#include "mc2_header.h"
#include "mc2_0901.h"

void mc2_0901 ( void )
{
   int32_t         mc2_0901_1   = get_int32 ( );
   int32_t         mc2_0901_2;
   int32_t         mc2_0901_3;
   int32_t const * p_mc2_0901_4 = &mc2_0901_1;
   int32_t         mc2_0901_5;
   int32_t const * p_mc2_0901_6;
   int32_t         mc2_0901_x;
   struct mc2_0901_str_type mc2_0901_str_auto;
   int32_t         mc2_0901_auto;

   mc2_0901_2 = get_int32 ( );           /* Initialisation before usage.   */
   mc2_0901_3 = get_int32 ( );           /* Initialisation before usage.   */

   use_int32 ( mc2_0901_1 );             /* Compliant                      */
   use_int32 ( mc2_0901_2 );             /* Compliant                      */

   mc2_0901_1 = mc2_0901_5;              /* Not Compliant                  */

   use_int32 ( *p_mc2_0901_4 );          /* Compliant                      */
   use_int32 ( *p_mc2_0901_6 );          /* Not Compliant                  */

   mc2_0901_fun1 ( &mc2_0901_x,
                   &mc2_0901_str_auto,
                   &mc2_0901_auto);      /* Not Compliant                  */
                  /* mc2_0901_str_auto and mc2_0901_auto are uninitialised */

   mc2_0901_str_auto.mc2_0901_str_a = get_int32 ( );
   mc2_0901_auto = get_int32 ( );

   mc2_0901_fun1 ( &mc2_0901_x,
                   &mc2_0901_str_auto,
                   &mc2_0901_auto);      /* Compliant                      */

   use_int32 ( mc2_0901_3 );
   use_int32 ( mc2_0901_1 );
   use_int32 ( mc2_0901_x );

}

/* end of mc2_0901_1.c */
