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
 *  20.5  The error indicator errno shall not be used
 */

#include "mc2_types.h"
#include "mc2_header.h"
#include <errno.h>
#include <math.h>


void mc2_2005 ( void )
{
  float64_t mc2_2005_result;
  mc2_2005_result = get_float64 ( );

  errno = 0;            /* Not Compliant not use errno */

  mc2_2005_result = asin ( mc2_2005_result );

  if ( errno != 0 )     /* Not Compliant do not use errno */
  {
    /* error recovery */
  }

  use_float64 ( mc2_2005_result );

}

/* end of mc2_2005.c */

