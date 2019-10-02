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
 * 16.10 If a function returns error information, then that error information
 *       shall be tested.
 */

/* It is not possible to indicate the exact non compliances in this example.
** Automatic enforcement of this rule is not possible.
** The value returned from a function may or may not contain error information.
** Error information is a semantic property (related to a specific project,
** application, and/or function) which in general cannot be detected by tools.
*/

#include "mc2_types.h"
#include "mc2_header.h"

static uint8_t mc2_1610a ( uint16_t *out_param_1610,
                           const uint16_t *in_param_1610 );

extern void mc2_1610 ( void )
{
   uint8_t error_status;
   uint16_t fun_ret_1610;
   uint16_t param_1610 = get_uint16 ( );

   fun_ret_1610 = get_uint16 ( );

   /* 'error' information is disregarded */
   (void) mc2_1610a ( &fun_ret_1610, &param_1610 );

   /* 'error' information is assigned to error_status, but never tested. */
   error_status = mc2_1610a ( &fun_ret_1610, &param_1610 );

   /* 'error' information is assigned to error_status, and subsequently tested. */
   error_status = mc2_1610a ( &fun_ret_1610, &param_1610 );
   if ( error_status != 0U )
   {
      fun_ret_1610 = 0U;
   }

   use_uint16 ( fun_ret_1610 );
}

static uint8_t mc2_1610a ( uint16_t *out_param_1610,
                           const uint16_t *in_param_1610 )
{
   uint8_t err_status = 0U;

   *out_param_1610 += ( *in_param_1610 );
   if ( ( *out_param_1610 ) < ( *in_param_1610 ) )
   {
      /* Overflow has occurred */
      err_status = 1U;
   }
   return ( err_status );
}

/* end of mc2_1610.c */

