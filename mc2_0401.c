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
 * 4.1 Only those escape sequences that are defined in the ISO C standard shall
 *     be used.
 */

/*  Exclusions: Octal escape sequences are not allowed under rule 7.1 */

/*  The ISO C standard referred to is the 1990 standard. */


#include "mc2_types.h"
#include "mc2_header.h"

void mc2_0401 ( void )
{
  /* Compliant escape sequences */

   use_char ( '\'' );
   use_char ( '\"' );
   use_char ( '\?' );
   use_char ( '\\' );
   use_char ( '\t' );
   use_char ( '\v' );
   use_char ( '\f' );
   use_char ( '\a' );
   use_char ( '\b' );
   use_char ( '\n' );
   use_char ( '\r' );
   use_char ( '\0' );

   /* Not Compliant - all hexadecimal escape sequences are banned */
   /* The following list is not exhaustive */

   use_char ( '\x0' );     /* Not Compliant */
   use_char ( '\x01' );    /* Not Compliant */
   use_char ( '\x12' );    /* Not Compliant */
   use_char ( '\xAB' );    /* Not Compliant */

   /* Non compliant escape sequences */

   use_char ( '\c' );     /* Not Compliant */
   use_char ( '\d' );     /* Not Compliant */
   use_char ( '\e' );     /* Not Compliant */
   use_char ( '\g' );     /* Not Compliant */
   use_char ( '\h' );     /* Not Compliant */
   use_char ( '\i' );     /* Not Compliant */
   use_char ( '\j' );     /* Not Compliant */
   use_char ( '\k' );     /* Not Compliant */
   use_char ( '\l' );     /* Not Compliant */
   use_char ( '\m' );     /* Not Compliant */
   use_char ( '\o' );     /* Not Compliant */
   use_char ( '\p' );     /* Not Compliant */
   use_char ( '\q' );     /* Not Compliant */
   use_char ( '\s' );     /* Not Compliant */
   use_char ( '\u' );     /* Not Compliant */
   use_char ( '\w' );     /* Not Compliant */
   use_char ( '\y' );     /* Not Compliant */
   use_char ( '\z' );     /* Not Compliant */
   use_char ( '\A' );     /* Not Compliant */
   use_char ( '\B' );     /* Not Compliant */
   use_char ( '\C' );     /* Not Compliant */
   use_char ( '\D' );     /* Not Compliant */
   use_char ( '\E' );     /* Not Compliant */
   use_char ( '\F' );     /* Not Compliant */
   use_char ( '\G' );     /* Not Compliant */
   use_char ( '\H' );     /* Not Compliant */
   use_char ( '\I' );     /* Not Compliant */
   use_char ( '\J' );     /* Not Compliant */
   use_char ( '\K' );     /* Not Compliant */
   use_char ( '\L' );     /* Not Compliant */
   use_char ( '\M' );     /* Not Compliant */
   use_char ( '\N' );     /* Not Compliant */
   use_char ( '\O' );     /* Not Compliant */
   use_char ( '\P' );     /* Not Compliant */
   use_char ( '\Q' );     /* Not Compliant */
   use_char ( '\R' );     /* Not Compliant */
   use_char ( '\S' );     /* Not Compliant */
   use_char ( '\T' );     /* Not Compliant */
   use_char ( '\U' );     /* Not Compliant */
   use_char ( '\V' );     /* Not Compliant */
   use_char ( '\W' );     /* Not Compliant */
   use_char ( '\X' );     /* Not Compliant */
   use_char ( '\Y' );     /* Not Compliant */
   use_char ( '\Z' );     /* Not Compliant */
}

/* end of mc2_0401.c */

