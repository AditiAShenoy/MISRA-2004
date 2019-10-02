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
 * 16.7 A pointer parameter in a function prototype should be declared as
 *      pointer to const if the pointer is not used to modify the addressed
 *      object.
 */

#include "mc2_types.h"
#include "mc2_header.h"

static void mc2_1607a ( uint16_t *p_modified,
                        const uint16_t *p_not_modified1,
                        uint16_t *p_not_modified2 );

void mc2_1607 ( void )
{
   uint16_t fun_ret_1607;
   uint16_t in_1607a = get_uint16 ( );
   uint16_t in_1607b = get_uint16 ( );

   mc2_1607a ( &fun_ret_1607, &in_1607a, &in_1607b );

   use_uint16 ( fun_ret_1607 );
}

/* Parameter p_not_modified2 is not modified and is not qualified by const */
static void mc2_1607a ( uint16_t *p_modified,
                        const uint16_t *p_not_modified1,
                        uint16_t *p_not_modified2 ) /* Not Compliant */
{
   *p_modified = ( *p_not_modified1 ) * ( *p_not_modified2 );
}

/* end of mc2_1607.c */

