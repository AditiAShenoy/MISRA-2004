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
 * 16.3 Identifiers shall be given for all of the parameters in a function
 *      prototype declaration
 */

#include "mc2_types.h"
#include "mc2_header.h"

/* No identifiers given */
static uint16_t mc2_1603a ( uint16_t );                          /* Not Compliant */

/* First identifier given, second identifier missing. */
static uint16_t mc2_1603b ( uint16_t param_1603b_1, uint16_t );  /* Not Compliant */

void mc2_1603 ( void )
{
   uint16_t fun_ret_1603;
   uint16_t fun_param_1603 = get_uint16 ( );

   fun_ret_1603 = mc2_1603a ( fun_param_1603 );
   fun_ret_1603 += mc2_1603b ( fun_param_1603, fun_param_1603 );

   use_uint16 ( fun_ret_1603 );
}

static uint16_t mc2_1603a ( uint16_t param_1603a )
{
   return param_1603a;
}

static uint16_t mc2_1603b ( uint16_t param_1603b_1, uint16_t param_1603b_2 )
{
   return param_1603b_1 + param_1603b_2;
}

/* end of mc2_1603.c */

