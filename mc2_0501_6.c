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

/*
 * variables + enumeration constants + labels,
 * not including functions + macros + tags + components + typedefs
 */

#include "mc2_types.h"
#include "mc2_header.h"
#include "mc2_0501_2.h"

void mc2_0501_vel ( void )
{
   /* variable vs enumeration constant */

   int32_t name_55_ve_xxxxxxxxxxxxxxxxxx31a;      /* Not Compliant */
   enum name_56
   {
      name_55_ve_xxxxxxxxxxxxxxxxxx31b            /* Not Compliant */
   };

   /* enumeration constant vs enumeration constant */

   enum name_57
   {
      name_58_ee_xxxxxxxxxxxxxxxxxx31a            /* Not Compliant */
   };

   enum name_59
   {
      name_58_ee_xxxxxxxxxxxxxxxxxx31b            /* Not Compliant */
   };

   /* variable vs variable */

   int32_t name_60_vv_xxxxxxxxxxxxxxxxxx31a;      /* Not Compliant */
   int32_t name_60_vv_xxxxxxxxxxxxxxxxxx31b;      /* Not Compliant */

   /* label vs enumeration constant */

   enum name_61
   {
      name_62_le_xxxxxxxxxxxxxxxxxx31a             /* Not Compliant */
   };

   /* label vs variable */

   int32_t name_63_lv_xxxxxxxxxxxxxxxxxx31a;       /* Not Compliant */


   /* Initialisation */


   enum name_56 iname_56 = name_55_ve_xxxxxxxxxxxxxxxxxx31b;
   enum name_57 iname_57 = name_58_ee_xxxxxxxxxxxxxxxxxx31a;
   enum name_59 iname_59 = name_58_ee_xxxxxxxxxxxxxxxxxx31b;
   enum name_61 iname_61 = name_62_le_xxxxxxxxxxxxxxxxxx31a;
   name_55_ve_xxxxxxxxxxxxxxxxxx31a = get_int32 ( );
   name_60_vv_xxxxxxxxxxxxxxxxxx31a = get_int32 ( );
   name_60_vv_xxxxxxxxxxxxxxxxxx31b = get_int32 ( );
   name_63_lv_xxxxxxxxxxxxxxxxxx31a = get_int32 ( );


   /* Usage */

   use_int32 ( name_55_ve_xxxxxxxxxxxxxxxxxx31a );

   /* label vs enumeration constant */

name_62_le_xxxxxxxxxxxxxxxxxx31b:                  /* Label Not Compliant */

   /* use_name_56 ( iname_56 ); some tools may flag iname_56 as unused */

   /* label vs variable */

name_63_lv_xxxxxxxxxxxxxxxxxx31b:                  /* Label Not Compliant */

   /* use_name_57 ( iname_57 ); some tools may flag iname_57 as unused */

   /* label vs label */

name_64_ll_xxxxxxxxxxxxxxxxxx31a:                  /* Label Not Compliant */

   /* use_name_59 ( iname_59 ); some tools may flag iname_59 as unused */

name_64_ll_xxxxxxxxxxxxxxxxxx31b:                  /* Label Not Compliant */

   use_int32 ( name_60_vv_xxxxxxxxxxxxxxxxxx31a );
   use_int32 ( name_60_vv_xxxxxxxxxxxxxxxxxx31b );
   /* use_name_61 ( iname_61 ); some tools may flag iname_61 as unused */
   use_int32 ( name_63_lv_xxxxxxxxxxxxxxxxxx31a );
}

/* end of mc2_0501_6.c */
