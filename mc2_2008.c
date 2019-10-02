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
 *  20.8  The Signal handling facilities of <signal.h> shall not be used.
 */

#include "mc2_types.h"
#include "mc2_header.h"
#include <signal.h>               /* Not Compliant rule 20.8 */

void mc2_2008 ( void )
{
  int16_t mc2_2008_signal;

  mc2_2008_signal = SIGINT;       /* Not Compliant rule 20.8 */

  use_int16 ( mc2_2008_signal );
}

/* end of mc2_2008.c */
