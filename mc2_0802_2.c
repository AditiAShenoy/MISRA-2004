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
 * 8.2 Whenever an object or function is declared or defined, it's type shall be
 *     explicitly stated.
 */

#include "mc2_types.h"
#include "mc2_header.h"
#include "mc2_0802.h"

void mc2_0802_2 ( void )
{
   use_int32 ( implicit_int );   /* Rule 8.10 Compliance */
   use_int16 ( explicit_int );   /* Rule 8.10 Compliance */
}

/* end of mc2_0802_2.c */
