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
 * 8.5 There shall be no definitions of objects or functions in a header file.
 */

/*
 * A header file is defined as any file that is included via #include, as
 * opposed to any file with the .h suffix.
 */

/* Included in mc2_0805_1.c and mc2_0805_2.c */

#ifndef MC2_0805_H
#define MC2_0805_H

/* The following line is compliant */
#define HEADER_DECL_MAC 1

typedef char char_type;            /* Compliant */

extern char_type header_decl_char; /* Compliant */

extern void mc2_0805b ( void );    /* Compliant */

extern int32_t def_header;         /* Compliant */

extern void mc2_0805_2 ( void );

#endif

/* end of mc2_0805.h */
