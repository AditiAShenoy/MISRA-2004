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
 * 12.11   Evaluation of constant unsigned integer expressions should not
 *         lead to wrap_around.
 *
 */

#include "mc2_types.h"
#include "mc2_header.h"

/* Examples assume a 32bit integer and 64bit long.
 * The pre-processor performs long type arithmetic
*/

#define START   0x80000000u
#define END     0xFFFFFFFFu
#define LEN     0x80000000u

#if ((START + LEN) > END)
   /* Compliant: preprocessor arithmetic is performed as if unsigned long */
#endif

#if (((END - START) - LEN) < 0)
   /* Not compliant: subtraction result wraps around to 0xFFFFFFFFFFFFFFFF */
#endif

void mc2_1211 ( void )
{
   /* contrast the above START + LEN with the following */
   if ((START + LEN) > END)
   {
      /* Not compliant: START + LEN wraps around to 0x0000 due
         to unsigned int arithmetic. Also violates 13.7 */
   }
}

/* end of mc2_1211.c */

