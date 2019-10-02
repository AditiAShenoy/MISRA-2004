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
 * 5.1 Identifiers (internal and external) shall not rely on the significance of
 *     more than 31 characters.
 */

/* typedefs, not including tags + components */

#include "mc2_types.h"
#include "mc2_header.h"
#include "mc2_0501_2.h"

#define name_34_ym_xxxxxxxxxxxxxxxxxx31a name_35            /* Not Compliant
                                                             * also Rule 19.4 */

static void name_36_yf_xxxxxxxxxxxxxxxxxx31a ( void );      /* Not Compliant */
static void name_36_yf_xxxxxxxxxxxxxxxxxx31a ( void )
{
   use_int32 ( 0 ); /* Do something */
}

void mc2_0501_y ( void )
{
   /* typedef vs function */

   typedef int32_t name_36_yf_xxxxxxxxxxxxxxxxxx31b;         /* Not Compliant */

   /* typedef vs macro */

   typedef int32_t name_34_ym_xxxxxxxxxxxxxxxxxx31b;         /* Not Compliant */

   /* typedef vs enumeration constant */

   typedef int32_t name_37_ye_xxxxxxxxxxxxxxxxxx31a;         /* Not Compliant */
   enum name_38
   {
      name_37_ye_xxxxxxxxxxxxxxxxxx31b                       /* Not Compliant */
   };

   /* typedef vs typedef */

   typedef int32_t name_39_yy_xxxxxxxxxxxxxxxxxx31a;         /* Not Compliant */
   typedef int32_t name_39_yy_xxxxxxxxxxxxxxxxxx31b;         /* Not Compliant */

   /* typedef vs variable */

   typedef int32_t name_40_yv_xxxxxxxxxxxxxxxxxx31a;         /* Not Compliant */
   int32_t name_40_yv_xxxxxxxxxxxxxxxxxx31b;                 /* Not Compliant */

   /* typedef vs label */

   typedef int32_t name_41_yl_xxxxxxxxxxxxxxxxxx31a;         /* Not Compliant */


   /* Initialisation */

   int32_t name_34_ym_xxxxxxxxxxxxxxxxxx31a     = get_int32 ( );
   name_36_yf_xxxxxxxxxxxxxxxxxx31b iname_36    = get_int32 ( );
   name_34_ym_xxxxxxxxxxxxxxxxxx31b iname_34    = get_int32 ( );
   name_37_ye_xxxxxxxxxxxxxxxxxx31a iname_37    = get_int32 ( );
   enum name_38 iname_38 = name_37_ye_xxxxxxxxxxxxxxxxxx31b;
   name_39_yy_xxxxxxxxxxxxxxxxxx31a iname_39a   = get_int32 ( );
   name_39_yy_xxxxxxxxxxxxxxxxxx31b iname_39b   = get_int32 ( );
   name_40_yv_xxxxxxxxxxxxxxxxxx31a iname_40    = get_int32 ( );
   name_41_yl_xxxxxxxxxxxxxxxxxx31a iname_41    = get_int32 ( );
   name_40_yv_xxxxxxxxxxxxxxxxxx31b             = get_int32 ( );


   /* Usage */

   use_int32 ( name_34_ym_xxxxxxxxxxxxxxxxxx31a );

name_41_yl_xxxxxxxxxxxxxxxxxx31b:                      /* Label Not Compliant */

   use_int32 ( iname_36 );
   use_int32 ( iname_34 );
   use_int32 ( iname_37 );
   /* use_name_38 ( iname_38 ); some tools may flag iname_38 as unused */
   use_int32 ( iname_39a );
   use_int32 ( iname_39b );
   use_int32 ( iname_40 );
   use_int32 ( name_40_yv_xxxxxxxxxxxxxxxxxx31b );
   use_int32 ( iname_41 );

   name_36_yf_xxxxxxxxxxxxxxxxxx31a ( );

}

/* end of mc2_0501_4.c */
