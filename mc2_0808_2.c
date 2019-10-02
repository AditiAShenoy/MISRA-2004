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
 * 8.8 An external object or function shall be declared in one and only one
 *     file.
 */

/* The following line is compliant */
#include "mc2_types.h"

/* The following line is compliant */
#include "mc2_header.h"

#include "mc2_0808_1.h"

int32_t ex_compliant_decl = 0;             /* Compliant */

void mc2_0808_2 ( void )                   /* Rule 8.10 Compliance */
{
   use_int32 ( ex_file_head_decl );
   ex_file_head_decl_f ( );
   use_int32 ( ex_head_head_decl );
   ex_head_head_decl_f ( );
}

/* end of mc2_0808_2.c */
