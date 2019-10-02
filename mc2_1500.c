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
 * 15.0  MISRA C switch syntax
 */

#include "mc2_types.h"
#include "mc2_header.h"

void mc2_1500 ( void )
{
   uint8_t zwitch;
   uint8_t zwitched;

   zwitch   = get_uint8 ( );
   zwitched = get_uint8 ( );

   switch ( zwitch )
   {
      uint8_t decl_b4_1st_case;   /* Not Compliant */
      case 0U:
      {
         zwitched += 1U;
         decl_b4_1st_case = zwitched;
         use_uint8 ( decl_b4_1st_case );
         break;
      }
      default:
      {
         zwitched += 2U;
         break;
      }
   }

   zwitch += zwitched;
   use_uint8 ( zwitch );
}

/* end of mc2_1500.c */
