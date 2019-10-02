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

/* The following three lines are compliant */
#include "mc2_types.h"
#include "mc2_header.h"
#include "mc2_0805.h"

/* The following line is not compliant */
#include "mc2_0805a.c"

char_type header_decl_char = '0';
int32_t def_header = HEADER_DECL_MAC; /* Complying with rule 8.10 */

void mc2_0805 ( void )
{
   char_type d_h_char = get_char ( ); /* Complying with rule 8.10 */
   header_decl_char = get_char ( );   /* Complying with rule 8.10 */
   n_def_header = mc2_0805a ( );

   /* Usage */

   use_int32 ( def_header );          /* Complying with rule 8.10 */
   use_int32 ( n_def_header );
   use_char ( d_h_char );
   use_char ( header_decl_char );

   /* Calling functions with internal linkage */

   mc2_0805b ( );                     /* Complying with rule 8.10 */

   /* Calling functions with external linkage */

   mc2_0805_2 ( );
}

void mc2_0805b ( void )               /* Complying with rule 8.10 */
{
   use_int32 ( n_def_header );
}

/* end of mc2_0805_1.c */
