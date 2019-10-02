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
 * 16.2 Functions shall not call themselves, either directly or indirectly.
 */

#include "mc2_types.h"
#include "mc2_header.h"
#include "mc2_1602.h"

/* Indirect function calling, in a different file:
 * Function mc2_1602d, which is in mc2_1602_1.c, calls mc2_1602e,
 * function mc2_1602e calls mc2_1602d.
 */
uint16_t mc2_1602e ( uint16_t param_1602e )
{
   uint16_t ret_val_1602e;

   if ( param_1602e > 0U )
   {
      ret_val_1602e = param_1602e * mc2_1602d ( param_1602e - 1U ); /* Not Compliant */
   }
   else
   {
      ret_val_1602e = param_1602e;
   }
   return ret_val_1602e;
}

/* end of mc2_1602_2.c */

