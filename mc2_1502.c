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
 * 15.2 An unconditional break statement shall terminate every
 *      non-empty switch clause.
 */

#include "mc2_types.h"
#include "mc2_header.h"

void mc2_1502 ( void )
{
   uint16_t unbreakable = get_uint16 ( );

   switch ( unbreakable )
   {
      case 1U:
      {
         use_uint16 ( unbreakable );
         break;
      }
      case 2U:
      {
         use_uint16 ( unbreakable );       /* Not Compliant */
      }
      case 3U:                             /* Compliant - empty */
      default:
      {
         use_uint16 ( unbreakable );
         break;
      }
   }
}


/* end of mc2_1502.c */
