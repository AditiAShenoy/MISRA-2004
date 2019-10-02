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

/* variables and functions with external linkage */

#include "mc2_types.h"
#include "mc2_header.h"
#include "mc2_0501_1.h"
#include "mc2_0501_2.h"

void mc2_0501_x2 ( void )
{
   /* uses variables and calls functions */
   use_int32 ( name_66_xfxv_xxxxxxxxxxxxxxxx31b );
   use_int32 ( name_68_xvxv_xxxxxxxxxxxxxxxx31a );
   use_int32 ( name_68_xvxv_xxxxxxxxxxxxxxxx31b );
   use_int32 ( name_70_xvv_xxxxxxxxxxxxxxxxx31a );
   use_int32 ( name_71_xvf_xxxxxxxxxxxxxxxxx31a );

   name_65_xfxf_xxxxxxxxxxxxxxxx31a ( );
   name_65_xfxf_xxxxxxxxxxxxxxxx31b ( );
   name_66_xfxv_xxxxxxxxxxxxxxxx31a ( );
   name_67_xff_xxxxxxxxxxxxxxxxx31a ( );
   name_69_xfv_xxxxxxxxxxxxxxxxx31a ( );
}

/* end of mc2_0501_2.c */
