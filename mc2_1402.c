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
 * 14.2  All non-null statements shall either
 *       (a) have at least one side-effect however executed or
 *       (b) cause control flow to change.
 *
 */


#include "mc2_types.h"
#include "mc2_header.h"

void mc2_1402 ( void )
{
  static volatile uint16_t mc2_1402_y;
   uint16_t mc2_1402_x;


   mc2_1402_x = get_uint16 ( );
   mc2_1402_x < 1u, mc2_1402_x < 2u;  /* Not compliant - also Rule 12.10 */
   mc2_1402_x < 1u;                   /* Not compliant */
   if ( mc2_1402_x < 1u )             /* Compliant     */
   {
      use_uint16 ( mc2_1402_x );
   }
   mc2_1402_y;                        /* Compliant     */
}

/* end of mc2_1402.c */
