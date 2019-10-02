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
 * 15.1 A switch label shall only be used when the most closely-enclosing
 *      compound statement is the body of a switch statement.
 */

#include "mc2_types.h"
#include "mc2_header.h"

void mc2_1501 ( void )
{
   uint16_t nest_switchable = get_uint16 ( );

   switch ( nest_switchable )
   {
      case 1U:
      {
         use_uint16 ( nest_switchable );
         case 2U:                              /* Not Compliant */
         {
            use_uint16 ( nest_switchable );
            break;
         }
         break;        /* Unreachable Code - Not Compliant 14.1 */
      }
      default:
      {
         use_uint16 ( nest_switchable );
         break;
      }
   }
}


/* end of mc2_1501.c */
