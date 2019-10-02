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
 * 5.5 No object or function identifier with static storage duration should be
 *     reused.
 */


#include "mc2_types.h"
#include "mc2_header.h"
#include "mc2_0505_1.h"
#include "mc2_0505_2.h"
#include "mc2_0505.h"


void mc2_0505_3 ( void ) /* Rule 8.10 Compliance */
{
   ss_dur2 = get_int32 ( );

   /* Calling functions with external linkage */

   ss_dur8 ( );
   ss_dur5 ( );
   ss_dur1 = ss_dur7 ( );
}

/* end of mc2_0505_3.c */
