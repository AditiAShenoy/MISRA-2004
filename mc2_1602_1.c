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

static uint16_t mc2_1602a ( uint16_t param_1602a );
static uint16_t mc2_1602b ( uint16_t param_1602b );
static uint16_t mc2_1602c ( uint16_t param_1602c );

void mc2_1602 ( void )
{
   uint16_t recursive_ret, recursive_param = get_uint16 ( );

   recursive_ret = mc2_1602a ( recursive_param );
   recursive_ret += mc2_1602b ( recursive_param );
   recursive_ret += mc2_1602d ( recursive_param );

   use_uint16 ( recursive_ret );
}

/* Function calling itself directly */
static uint16_t mc2_1602a ( uint16_t param_1602a )
{
   uint16_t ret_val_1602a;
   if ( param_1602a > 0U )
   {
      ret_val_1602a = param_1602a * mc2_1602a ( param_1602a - 1U ); /* Not Compliant */
   }
   else
   {
      ret_val_1602a = param_1602a;
   }
   return ret_val_1602a;
}

/* Indirect function calling:
 * Function mc2_1602_b calls mc2_1602_c, which calls mc2_1602_b
 */
static uint16_t mc2_1602b ( uint16_t param_1602b )
{
   uint16_t ret_val_1602b;

   if ( param_1602b > 0U )
   {
      ret_val_1602b = param_1602b * mc2_1602c ( param_1602b - 1U ); /* Not Compliant */
   }
   else
   {
      ret_val_1602b = param_1602b;
   }
   return ret_val_1602b;
}

static uint16_t mc2_1602c ( uint16_t param_1602c )
{
   uint16_t ret_val_1602c;

   if ( param_1602c > 0U )
   {
      ret_val_1602c = param_1602c * mc2_1602b ( param_1602c - 1U ); /* Not Compliant */
   }
   else
   {
      ret_val_1602c = param_1602c;
   }
   return ret_val_1602c;
}

/* Indirect function calling, in a different file:
 * Function mc2_1602_d calls mc2_1602_e, which is in mc2_1602_2.c,
 * function mc2_1602_e calls mc2_1602_d.
 */
extern uint16_t mc2_1602d ( uint16_t param_1602d )
{
   uint16_t ret_val_1602d;

   if ( param_1602d > 0U )
   {
      ret_val_1602d = param_1602d * mc2_1602e ( param_1602d - 1U ); /* Not Compliant */
   }
   else
   {
      ret_val_1602d = param_1602d;
   }
   return ret_val_1602d;
}

/* end of mc2_1602_1.c */

