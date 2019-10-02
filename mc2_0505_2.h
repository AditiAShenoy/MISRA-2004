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
 * 5.5 No object or function identifier with static storage duration should be
 *     reused.
 */

/* Included in mc2_0505_2.c and mc2_0505_3.c */

#ifndef MC2_0505_2_H
#define MC2_0505_2_H

extern int32_t ss_dur2;          /* Not Compliant */
extern void ss_dur8 ( void );    /* Not Compliant */

#endif

/* end of mc2_0505_2.h */

