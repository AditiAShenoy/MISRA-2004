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
 * 9.1 All automatic variables shall have been assigned a value before
 *     being used.
 */

#include "mc2_types.h"
#include "mc2_header.h"
#include "mc2_0901.h"

void mc2_0901_fun1 ( int32_t *mc2_0901_par1,
                     struct mc2_0901_str_type *mc2_0901_par2,
                     int32_t *mc2_0901_par3 )
{
   *mc2_0901_par1 = *mc2_0901_par3 + mc2_0901_par2->mc2_0901_str_a;
}

/* end of mc2_0901_2.c */






