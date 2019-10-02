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

/* Included in mc2_0808_1.c and mc2_0808_2.c */

#ifndef MC2_0808_1_H
#define MC2_0808_1_H

extern int32_t ex_file_head_decl;
extern void ex_file_head_decl_f ( void );

extern int32_t ex_head_head_decl;           /* Not Compliant -
                                               declared in mc2_0808_2.h */
extern void ex_head_head_decl_f ( void );   /* Not Compliant -
                                               declared in mc2_0808_2.h */
extern void mc2_0808_2 ( void );

#endif

/* end of mc2_0808_1.h */


