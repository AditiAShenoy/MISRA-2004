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
 * 14.1 There shall be no unreachable code.
 *
 */

/*
 * This file also contains violations of Rule 13.7
 */

#include <stdlib.h>
#include "mc2_types.h"
#include "mc2_header.h"

static void mc2_1401_exit ( uint32_t mc2_1401_z );

static void mc2_1401_exit ( uint32_t mc2_1401_z )
{
   use_uint32 ( mc2_1401_z );
   exit ( 0 );                    /* Not Compliant with Rules 14.7, 20.11 */
   use_uint32 ( mc2_1401_z );     /* Not Compliant -- unreachable */
   return;
}

void mc2_1401 ( void )
{
   uint32_t mc2_1401_x;
   mc2_1401_x = get_uint32 ( );

   switch ( mc2_1401_x )
   {
   case 1U:
      use_uint32 ( mc2_1401_x );
      break;                      /* unconditional control transfer */
   /* Missing case */
      use_uint32 ( mc2_1401_x );  /* Not Compliant -- unreachable */
                                  /* Also Rule 15.0 */
      break;
   case 2U:
      use_uint32 ( mc2_1401_x );
      break;
   default:
      break;
   }

   if ( mc2_1401_x > 1u )
   {
      mc2_1401_exit ( mc2_1401_x );
      use_uint32 ( mc2_1401_x );  /* Not Compliant -- unreachable */
   }

   if ( 0 )
   {
      use_uint32 ( mc2_1401_x );  /* Not Compliant -- unreachable/infeasable */
   }

   if ( !1 )
   {
      use_uint32 ( mc2_1401_x );  /* Not Compliant -- unreachable/infeasable */
   }

   goto lab;                      /* Not Compliant with Rule 14.4 */
      use_uint32 ( mc2_1401_x );  /* Not Compliant -- unreachable */
   lab:

   return;                        /* Not Compliant with Rule 14.7 */
   use_uint32 ( mc2_1401_x );     /* Not Compliant -- unreachable */

}

/* end of mc2_1401.c */
