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
 * 8.6 Functions shall be declared at file scope.
 */

#include "mc2_types.h"
#include "mc2_header.h"
#include "mc2_0806.h"

void mc2_0806 ( void )
{
   extern void mc2_0806a ( void ); /* Not Compliant */
   static void mc2_0806b ( void ); /* Not Compliant */

   /* Calling functions with internal linkage */

   mc2_0806a ( );
   mc2_0806b ( );

   /* Calling functions with external linkage */

   mc2_0806_2 ( );
}

static void mc2_0806b ( void ) /* Not Compliant Rules 5.5, 5.7, 8.1 */
{
   use_int32 ( 0 );
}

void mc2_0806a ( void ) /* Not Compliant Rule 8.1 */
{
   use_int32 ( 0 );
}

/* end of mc2_0806_1.c */
