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
 * 5.4 A tag name shall be a unique identifier.
 */

/* Included in mc2_0504_1.c and mc2_0504_2.c */

#ifndef MC2_0504_1_H
#define MC2_0504_1_H

struct compliant_tag
{
   int32_t tag_component;
};

extern struct compliant_tag mc2_0504_2 ( void );

#endif

/* end of mc2_0504_1.h */
