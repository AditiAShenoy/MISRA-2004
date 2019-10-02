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
 *  20.2  The Names of Standard Library macros, objects
 *         and functions shall not be reused.
 */

#include "mc2_types.h"
#include "mc2_header.h"


static int32_t  sqrt ( int32_t mc2_2002_value );    /* Not Compliant */

static int16_t tm  = 8; /* Not Compliant - tm is the name of a structure tag in time.h */

void mc2_2002 ( void )
{
  int32_t  mc2_2002_number = -21;
  mc2_2002_number = sqrt ( mc2_2002_number );
  use_int32 ( mc2_2002_number );
  use_int16 ( tm );
}

static int32_t sqrt ( int32_t mc2_2002_value )    /* Not Compliant */
{
    tm = get_int16();
    return ( mc2_2002_value + 5 );
}

/* end of mc2_2002.c */
