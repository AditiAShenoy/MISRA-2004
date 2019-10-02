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
 * 2.3 The character sequence
 *     /* shall not be used within a comment.   Not Compliant
 */

#include "mc2_types.h"
#include "mc2_header.h"


/* Function comment is compliant. */
void mc2_0203 ( void )
{
   use_int32 ( 0 );

   /* The next function call is very important. However, the end comment
      marker is accidentally omitted from the text that explains this...

   Perform_Safety_Critical_Function ( X );

   /* The function is not called and this comment is not compliant.
      Note: this is not compliant with Rule 2.4                      */
}

/* end of mc2_0203.c */
