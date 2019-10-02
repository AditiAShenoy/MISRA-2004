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


#include "mc2_types.h"                         /* Compliant */
#include "mc2_header.h"                        /* Compliant */
#include "mc2_0808_1.h"
#include "mc2_0808_2.h"

extern int32_t ex_file_head_decl;              /* Not Compliant */
extern void ex_file_head_decl_f ( void );      /* Not Compliant */

extern int32_t ex_compliant_decl;              /* Compliant */

int32_t ex_file_head_decl = 0;
void ex_file_head_decl_f ( void )
{
   use_int32 ( ex_file_head_decl );            /* Use of extern variable */
}

int32_t ex_head_head_decl = 0;
void ex_head_head_decl_f ( void )
{
   use_int32 ( ex_head_head_decl );            /* Use of extern variable */
   use_int32 ( ex_compliant_decl );            /* Use of extern variable */
}

void mc2_0808 ( void )
{
   mc2_0808_2 ( );            /* Calling functions with external linkage */
   ex_file_head_decl_f ( );   /* Calling functions with internal linkage */
   ex_head_head_decl_f ( );
}

/* end of mc2_0808_1.c */
