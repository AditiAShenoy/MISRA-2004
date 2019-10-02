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

/* Included in mc2_0802_1.c and mc2_0802_2.c */

#ifndef MC2_0802_H
#define MC2_0802_H

extern const implicit_int;         /* Not Compliant - implicit type */
extern int16_t explicit_int;

extern void mc2_0802_2 ( void );

#endif

/* end of mc2_0802.h */
