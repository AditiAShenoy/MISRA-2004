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
 * 7.1 Octal constants (other than zero) and octal escape sequences shall not be
 *     used.
 */


#include "mc2_types.h"
#include "mc2_header.h"

void mc2_0701 ( void )
{
   int8_t octal_const, n_octal_const;
   char_t octal_escape, n_octal_escape;
   char_t * n_octal_point = "abc\017";           /* Not Compliant */

   octal_const = 17;
   use_int8 ( octal_const );                     /* Usage */
   octal_const = 0x17;
   use_int8 ( octal_const );
   octal_const = 0;
   use_int8 ( octal_const );
   octal_escape = '\0';          /* Compliant - exception to rule */
   use_char ( octal_escape );

   n_octal_const = 017;                          /* Not Compliant */
   use_int8 ( n_octal_const );                   /* Usage */
   n_octal_const = 00;                           /* Not Compliant */
   use_int8 ( n_octal_const );
   n_octal_const = 0017;                         /* Not Compliant */
   use_int8 ( n_octal_const );
   n_octal_escape = '\01';                       /* Not Compliant */
   use_char ( n_octal_escape );

   use_char_ptr ( n_octal_point );
}

/* end of mc2_0701.c */



