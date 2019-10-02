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
 * 8.1 Functions shall have prototype declarations and the prototype shall be
 *     visible at both the function definition and call.
 */


#include "mc2_types.h"
#include "mc2_header.h"
#include "mc2_0801_1.h"
#include "mc2_0801_2.h"
#include "mc2_0801.h"

void mc2_0801_2 ( void )
{
   mc2_0801_2a ( );
   mc2_0801_1b ( );
}

void mc2_0801_2a ( void )
{
   use_int32 ( 0 );
}

/* end of mc2_0801_2.c */
