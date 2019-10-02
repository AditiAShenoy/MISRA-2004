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
 * 8.2 Whenever an object or function is declared or defined, it's type shall be
 *     explicitly stated.
 */

#include "mc2_types.h"
#include "mc2_header.h"
#include "mc2_0802.h"

static void mc2_0802_1a ( void );
static mc2_0802_1b ( void );      /* Not Compliant - implicit type */

int16_t explicit_int = 0;
const implicit_int = 0;           /* Not Compliant - implicit type */


void mc2_0802 ( void )
{
   const implicit_const_int = 1;  /* Not Compliant - implicit type */
   const int16_t explicit_const_int = 2;

   mc2_0802_1a ( );               /* Calling function with internal linkage */
   ( void ) mc2_0802_1b ( );      /* Calling function with internal linkage */
   explicit_int += explicit_const_int;

   /* Usage */

   use_int32 ( implicit_const_int );

   /* Calling functions with external linkage */

   mc2_0802_2 ( );
}

static void mc2_0802_1a ( void )
{
   use_int32 ( implicit_int );
}

static mc2_0802_1b ( void ) /* Not Compliant - implicit type */
{
   use_int16 ( explicit_int );
   return 0;
}

/* end of mc2_0802_1.c */
