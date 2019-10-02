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
 * 2.1 Assembly language shall be encapsulated and isolated.
 */

/* All use of assembler in this file is not compliant with Rule 1.1 */

#include "mc2_types.h"
#include "mc2_header.h"

/* The following two lines are not compliant with Rule 19.4 */
#define DISABLE_IRQS asm { "CLI" }
#define ENABLE_IRQS  asm { "SEI" }

static void mc2_0201_fn1 ( void );
static void mc2_0201_fn2 ( void );
static void mc2_0201_fn3 ( void );

/* Conforming example - all assembler is encapsulated in MACROS               */
static void mc2_0201_fn1 ( void )
{
   DISABLE_IRQS;                       /* Disable all interrupts.             */
   use_int16 ( 0 );                    /* Do something.                       */
   ENABLE_IRQS;                        /* Enable all interrupts.              */
}

/* Non-conforming example - assembler and 'C' are mixed in a 'C' function.    */
static void mc2_0201_fn2 ( void )
{
   asm { "CLI" };                      /* Not Compliant                       */
   use_int16 ( 1 );                    /* Do something.                       */
   asm { "SEI" };                      /* Not Compliant                       */
}

/* Conforming example - all assembler is encapsulated in a 'C' function.      */
static void mc2_0201_fn3 ( void )
{
   asm { "CLI" };                      /* Disable all interrupts.             */
   asm { "NOP" };                      /* Do nothing.                         */
   asm { "SEI" };                      /* Re-enable all interrupts.           */
}

void mc2_0201 ( void )
{
   mc2_0201_fn1 ( );
   mc2_0201_fn2 ( );
   mc2_0201_fn3 ( );
}

/* end of mc2_0201.c */
