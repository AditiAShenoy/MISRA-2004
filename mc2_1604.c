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
 * 16.4 The identifiers used in the declaration and definition of a function
 *      shall be identical.
 */

#include "mc2_types.h"
#include "mc2_header.h"

/* Name of parameter is different in declaration and definition */
static uint16_t mc2_1604a ( uint16_t n_param_1603a);
/* Name of second parameter is different in declaration and definition */
static uint16_t mc2_1604b ( uint16_t param_1603b_1, uint16_t n_param_1603b_2);

void mc2_1604 ( void )
{
   uint16_t fun_ret_1604;
  uint16_t fun_param_1604 = get_uint16 ( );

   fun_ret_1604 = mc2_1604a ( fun_param_1604 );
   fun_ret_1604 += mc2_1604b ( fun_param_1604, fun_param_1604 );

   use_uint16 ( fun_ret_1604 );
}

/* Not Compliant */
static uint16_t mc2_1604a ( uint16_t param_1603a )
{
   return param_1603a;
}

/* Not Compliant */
static uint16_t mc2_1604b ( uint16_t param_1603b_1, uint16_t param_1603b_2 )
{
   return param_1603b_1 + param_1603b_2;
}

/* end of mc2_1604.c */

