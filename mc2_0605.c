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
 * 6.5 Bit fields of type signed int shall be at least 2 bits long.
 *
 *     A signed bit field of 1 bit length is not useful.
 */


#include "mc2_types.h"
#include "mc2_header.h"

struct bitfield65
{
   signed bf_s2:2;           /* Compliant */
   unsigned bf_u1:1;         /* Compliant */
   signed int bf_si2:2;      /* Compliant */
   unsigned int bf_ui1:1;    /* Compliant */
   unsigned :0;              /* Compliant */
   unsigned int :0;          /* Compliant */
};

struct n_bitfield65
{
   signed bf_s1:1;             /* Not Compliant */
   signed int bf_si1:1;        /* Not Compliant */
   signed :0;                  /* Not Compliant */
   signed int :0;              /* Not Compliant */
};

/* The following externs are included here for completeness. */
/* They would normally be located in a header file.          */
extern struct bitfield65   get_bitfield65   ( void );
extern struct n_bitfield65 get_n_bitfield65 ( void );
extern void use_bitfield65   ( struct bitfield65 use_bitfield65_param );
extern void use_n_bitfield65 ( struct n_bitfield65 use_n_bitfield65_param );

void mc2_0605 ( void )
{
   /* Usage */

   struct bitfield65 bf65;
   struct n_bitfield65 n_bf65;

   bf65 = get_bitfield65 ( );
   n_bf65 = get_n_bitfield65 ( );
   use_bitfield65 ( bf65 );
   use_n_bitfield65 ( n_bf65 );
}

/* end of mc2_0605.c */
