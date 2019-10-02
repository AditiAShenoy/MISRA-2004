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
 * 14.3   Before preprocessing, a null statement shall only occur on a line
 *        by itself: it may be followed by a comment provided that the first
 *        character following the null statement is a white space character.
 *
 */


#include "mc2_types.h"
#include "mc2_header.h"

void mc2_1403 ( void )
{
   ; /* Compliant - whitespace after semi-colon */

   /* A Comment */ ; /* Not compliant, comment before semi-colon */

   ;/* Not compliant, no white-space char after semi-colon */

   ;
   /* Previous line compliant */
}

/* end of mc2_1403.c */
