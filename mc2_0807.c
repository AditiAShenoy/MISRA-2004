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
 * 8.7 Objects shall be defined at block scope if they are only accessed from
 *     within a single function.
 */


#include "mc2_types.h"
#include "mc2_header.h"

static int32_t mc2_0807a ( void );
static int32_t should_be_local;      /* Not Compliant */

void mc2_0807 ( void )
{
   int32_t is_local;                 /* Compliant */
   static int32_t local_ssd = 0;     /* Compliant */
   is_local = mc2_0807a ( );
   use_int32 ( is_local );
   use_int32 ( local_ssd );
}

static int32_t mc2_0807a ( void )
{
   should_be_local = get_int32 ( );
   return should_be_local;
}


/* end of mc2_0807.c */
