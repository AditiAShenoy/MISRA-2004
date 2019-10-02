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
#include "mc2_0801.h"

static void mc2_0801_1 ( void ); /* Compliant */

void mc2_0801 ( void )
{
   mc2_0801_1 ( );               /* Compliant */

   /* Calling functions with external linkage */

   mc2_0801_2 ( );
   mc2_0801_3 ( );
}

static void mc2_0801_1 ( void )
{
   mc2_0801_1a ( );              /* Not Compliant - no prototype declaration */
}

static void mc2_0801_1a ( void ) /* Not Compliant - no prototype */
{
   mc2_0801_2a ( );              /* Not Compliant - prototype exists
                                    in mc2_0801_2.h but is not visible */
   mc2_0801_1b ( );
}

void mc2_0801_1b ( void )
{
   use_int32 ( 0 );
}

/* end of mc2_0801_1.c */

