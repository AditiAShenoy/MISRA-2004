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
 * 18.4 Unions shall not be used
 */

#include "mc2_types.h"
#include "mc2_header.h"

typedef union                        /* Not Compliant */
{
   uint32_t uword;
   uint8_t  ubytes [ 4 ];
} union_t;

void mc2_1804 ( void )
{
   union_t mc2_1804_u;

   mc2_1804_u.uword = get_uint32 ( );
   use_uint32 ( mc2_1804_u.uword );
}
/* end of mc2_1804.c */
