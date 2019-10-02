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
 *  20.10  The library functions atof, atoi and atol
 *         from library <stdlib.h> shall not be used
 */


#include "mc2_types.h"
#include "mc2_header.h"
#include <stdlib.h>

void  mc2_2010 ( void )
{
  float64_t mc2_2010_a_to_float_result;
  int32_t   mc2_2010_a_to_int_result;
  int64_t   mc2_2010_a_to_long_result;

  mc2_2010_a_to_float_result = atof ( "123.5" ); /* Not Compliant rule 20.10*/
  mc2_2010_a_to_int_result = atoi ( "12345" );   /* Not Compliant rule 20.10*/
  mc2_2010_a_to_long_result = atol ( "12345" );  /* Not Compliant rule 20.10*/

  use_float64 ( mc2_2010_a_to_float_result );
  use_int32   ( mc2_2010_a_to_int_result );
  use_int64   ( mc2_2010_a_to_long_result );

}

/* end of mc2_2010.c */
