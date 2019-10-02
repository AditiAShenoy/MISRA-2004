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
 *  20.6  The macro offsetof in stddef.h shall not be used
 */

#include "mc2_types.h"
#include "mc2_header.h"
#include <stdlib.h>
#include <stddef.h>


void mc2_2006 ( void )
{
  struct mc2_2006_s { int16_t mc2_2006_a; int16_t mc2_2006_b; };
  uint32_t mc2_2006_offset;

  mc2_2006_offset = offsetof ( struct mc2_2006_s, mc2_2006_b );
                                      /* Not Compliant: use of offsetof */

  use_uint32 ( mc2_2006_offset );

}

/* end of mc2_2006.c */

