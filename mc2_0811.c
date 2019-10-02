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
 * 8.11 The static storage class specifier shall be used in definitions and
 *      declarations of objects and functions that have internal linkage.
 */


#include "mc2_types.h"
#include "mc2_header.h"

static void mc2_0811a ( void );

void mc2_0811b ( void );

static uint16_t mc2_0811_a;

extern uint16_t mc2_0811_b;

static uint16_t mc2_0811_b = 1U;        /* Not Compliant */

void mc2_0811 ( void )
{
   mc2_0811a ( );
   mc2_0811b ( );
}

void mc2_0811a ( void )                 /* Not Compliant */
{
   use_int32 ( 0 );
   use_uint16 ( mc2_0811_a );
   use_uint16 ( mc2_0811_b );
}


/* Note - the following non compliance may also cause a Rule 1.2 violation */
static void mc2_0811b ( void )          /* Not Compliant */
{
   use_int32 ( 0 );
   use_uint16 ( mc2_0811_a );
   use_uint16 ( mc2_0811_b );
}
/* end of mc2_0811.c */
