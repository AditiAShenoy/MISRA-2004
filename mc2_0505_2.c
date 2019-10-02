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
 * 5.5 No object or function identifier with static storage duration should be
 *     reused.
 */

#include "mc2_types.h"
#include "mc2_header.h"
#include "mc2_0505_2.h"
#include "mc2_0505.h"

static int32_t ss_dur0;          /* Not Compliant */
static int32_t ss_dur1;          /* Not Compliant */
static void ss_dur4 ( void );    /* Not Compliant */
static void ss_dur5 ( void );    /* Not Compliant */
static int32_t ss_dur6;          /* Not Compliant */
static int32_t ss_dur7;          /* Not Compliant */

int32_t ss_dur2 = 0;             /* Not Compliant */
static int32_t ss_dur3;          /* Not Compliant */
static int32_t ss_dur9 ( void ); /* Not Compliant */


void mc2_0505_2 ( void )
{
   ss_dur0 = get_int32 ( );         /* Rule 8.7 Compliance */
   ss_dur1 = get_int32 ( );
   ss_dur3 = get_int32 ( );
   ss_dur6 = get_int32 ( );
   ss_dur7 = get_int32 ( );
   ss_dur2 = get_int32 ( );

   use_int32 ( ss_dur0 );
   use_int32 ( ss_dur1 );
   use_int32 ( ss_dur3 );
   use_int32 ( ss_dur6 );
   use_int32 ( ss_dur7 );
   use_int32 ( ss_dur2 );

   /* Calling functions with internal linkage */

   ss_dur4 ( );
}

static void ss_dur4 ( void )
{
   /* Calling functions with internal linkage */

   ss_dur5 ( );

   /* Calling functions with external linkage */

   ss_dur8 ( );

   /* Following calls are to use these variables in more than one function */
   ss_dur1 = get_int32 ( );
   ss_dur3 = get_int32 ( );
   ss_dur6 = get_int32 ( );
   ss_dur7 = get_int32 ( );

   use_int32 ( ss_dur1 );
   use_int32 ( ss_dur3 );
   use_int32 ( ss_dur6 );
   use_int32 ( ss_dur7 );
}

static void ss_dur5 ( void )
{
   use_int32 ( 0 );   /* Do Something */
}

void ss_dur8 ( void ) /* Called from mc2_0505_3.c */
{
   ss_dur0 = ss_dur9 ( );
}

static int32_t ss_dur9( void )
{
   ss_dur2 = get_int32 ( );
   return ss_dur2;
}


/* end of mc2_0505_2.c */
