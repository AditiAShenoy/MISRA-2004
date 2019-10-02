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
 * 16.8 All exit paths from a function with non-void return type shall have
 * an explicit return statement with an expression.
 */

#include "mc2_types.h"
#include "mc2_header.h"

static uint16_t mc2_1608a ( uint16_t param_1608 );

void mc2_1608 ( void )
{
   uint16_t fun_ret_1608, fun_param_1608 = get_uint16 ( );

   fun_ret_1608 = mc2_1608a ( fun_param_1608 );

   use_uint16 ( fun_ret_1608 );
}

/* When param_1608 <= 5 the return value is undefined. */
static uint16_t mc2_1608a ( uint16_t param_1608 )
{
   if ( param_1608 > 5U )
   {
      return ( param_1608 );
   }
   /* Not Compliant - also Rule 14.7 */
}

/* end of mc2_1608.c */

