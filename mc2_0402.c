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
 * 4.2 Trigraphs shall not be used.
 */

#include "mc2_types.h"
#include "mc2_header.h"

void mc2_0402 ( void )
{
   /* Trigraphs - Non Compliant */

   use_char_ptr ( "??(" );     /* Not Compliant */
   use_char_ptr ( "??)" );     /* Not Compliant */
   use_char_ptr ( "??<" );     /* Not Compliant */
   use_char_ptr ( "??>" );     /* Not Compliant */
   use_char_ptr ( "??!" );     /* Not Compliant */
   use_char_ptr ( "??'" );     /* Not Compliant */
   use_char_ptr ( "??-" );     /* Not Compliant */
   use_char_ptr ( "??=" );     /* Not Compliant */
   use_char_ptr ( "??/??/" );  /* Not Compliant */

   /* ??/??/ is an escape sequence of // representing / */

   /* Compliant representation of each trigraph - these are NOT trigraphs */

   use_char_ptr ( " Non-Trigraphs ?\?( ?\?) ?\?< ?\?> ?\?/ ?\?! ?\?' ?\?- ?\?= " );
}

/* end of mc2_0402.c */
