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
 * 8.12 When an array is declared with external linkage, it's size shall be
 *      stated explicitly or defined implicitly by initialisation.
 */

/* Included in mc2_0812.c */

#ifndef MC2_0812_H
#define MC2_0812_H

extern int32_t ex_array1 [ 5 ];              /* Compliant */
extern int32_t ex_array2 [ 3 ];              /* Compliant */
extern int32_t n_ex_array [ ];               /* Not Compliant */

extern void mc2_0812_2 ( void );

#endif

/* end of mc2_0812.h */
