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
 * 15.5 Every switch statement shall have at least one case clause.
 */

#include "mc2_types.h"
#include "mc2_header.h"

void mc2_1505 ( void )
{
   uint16_t no_case = get_uint16 ( );

   switch ( no_case )
   {
      default:
      {
         use_uint16 ( no_case );
         break;
      }
   }                             /* Not Compliant */
}


/* end of mc2_1505.c */
