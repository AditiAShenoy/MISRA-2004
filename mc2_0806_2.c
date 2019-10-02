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

extern void mc2_0806a ( void ); /* Not Compliant 8.8 */

void mc2_0806_2 ( void ) /* Rule 8.10 Compliance */
{
   mc2_0806a ( );
}

/* end of mc2_0806_2.c */


