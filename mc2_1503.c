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
 * 15.3 The final clause of a switch statement shall be the default clause.
 */

#include "mc2_types.h"
#include "mc2_header.h"

void mc2_1503 ( void )
{
   uint16_t defaults = get_uint16 ( );

   switch ( defaults )
   {
      case 1U:
      {
         use_uint16 ( defaults );
         break;
      }
      default:                        /* Not Compliant */
      {
         use_uint16 ( defaults );
         break;
      }
      case 2U:
      {
         use_uint16 ( defaults );
         break;
      }
   }

   switch ( defaults )
   {
      case 3U:
      {
         use_uint16 ( defaults );
         break;
      }
      case 4U:
      {
         use_uint16 ( defaults );
         break;
      }
   }                                  /* Not Compliant */
}


/* end of mc2_1503.c */
