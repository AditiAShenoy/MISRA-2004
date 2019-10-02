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
 * 16.9 A function identifier shall only be used with either a preceding &, or
 * with a parenthesised parameter list, which may be empty.
 */

#include "mc2_types.h"
#include "mc2_header.h"

static uint16_t mc2_1609a ( void );
static uint16_t mc2_1609b ( void );

/* Comparison is comparing the address of the functions instead of the result. */
void mc2_1609 ( void )
{
   uint16_t fun_ret_1609;

   if ( mc2_1609a == mc2_1609b )           /* Not Compliant */
   {
      fun_ret_1609 = mc2_1609a ( );
   }
   else
   {
      fun_ret_1609 = mc2_1609b ( );
   }

   use_uint16 ( fun_ret_1609 );
}

static uint16_t mc2_1609a ( void )
{
   return 3U;
}

static uint16_t mc2_1609b ( void )
{
   return 5U;
}

/* end of mc2_1609.c */

