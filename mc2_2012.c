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
 *  20.12  The time handling functions of <time.h> shall not be used
 */

#include "mc2_types.h"
#include "mc2_header.h"
#include <time.h>               /* Not Compliant to include time.h */

void mc2_2012 ( void )
{
  float64_t  mc2_2012_time_dif;
  time_t     mc2_2012_time_1;   /* use of  time_t from time.h */
  time_t     mc2_2012_time_2;   /* use of  time_t from time.h */
  struct tm mc2_2012_mytime;

  mc2_2012_time_1 = clock ( );

  mc2_2012_mytime.tm_year = 0; /* use of items derived from time.h */

  mc2_2012_time_2 = clock ( );
  mc2_2012_time_dif = difftime ( mc2_2012_time_1, mc2_2012_time_2 );
                                /* use of difftime from time.h */

  use_int32 ( mc2_2012_mytime.tm_year );

  use_float64 ( mc2_2012_time_dif );
}

/* end of mc2_2012.c */
