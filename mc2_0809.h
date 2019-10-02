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
 * 8.9 An identifier with external linkage shall have exactly one external
 *     definition.
 */

/* Included in mc2_0809_1.c and mc2_0809_2.c */

#ifndef MC2_0809_H
#define MC2_0809_H

extern int32_t two_different_definitions;
extern void two_identical_definitions ( void );

extern int32_t no_defintion;                 /* Not Compliant - no definition */
extern void no_definition_f ( void );        /* Not Compliant - no definition */

extern void mc2_0809_2 ( void );

#endif

/* end of mc2_0809.h */
