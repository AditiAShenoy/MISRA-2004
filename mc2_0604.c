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
 * 6.4 Bit fields shall only be defined to be of type unsigned int or signed
 *     int.
 */


#include "mc2_types.h"
#include "mc2_header.h"

typedef unsigned int my_uint64;
typedef int my_int64;

struct bitfield64
{
   unsigned bf_unsigned:4;
   signed bf_signed:2;
   unsigned int bf_unsigned_i:6;
   signed int bf_signed_i:5;
   my_uint64 bf_typedef:7;
};

struct n_bitfield64
{
   int bf_int:5;                      /* Not Compliant */
   char bf_char:6;                    /* Not Compliant */
   enum bf_enum { bf_enumerated }:2;  /* Not Compliant */
   short bf_short: 5;                 /* Not Compliant */
   unsigned char bf_unsigned_char: 3; /* Not Compliant */
   my_int64 n_bf_typedef: 4;          /* Not Compliant */
};

/* The following externs are included here for completeness. */
/* They would normally be located in a header file.          */
extern struct bitfield64   get_bitfield64   ( void );
extern struct n_bitfield64 get_n_bitfield64 ( void );
extern void use_bitfield64   ( struct bitfield64 use_bitfield64_param );
extern void use_n_bitfield64 ( struct n_bitfield64 use_n_bitfield64_param );

void mc2_0604 ( void )
{
   /* Usage */
   struct bitfield64 bf_64;
   struct n_bitfield64 n_bf_64;
   bf_64 = get_bitfield64 ( );
   n_bf_64 = get_n_bitfield64 ( );
   use_bitfield64 ( bf_64 );
   use_n_bitfield64 ( n_bf_64 );
}

/* end of mc2_0604.c */

