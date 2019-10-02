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
#include "mc2_0505_1.h"
#include "mc2_0505.h"

static int32_t ss_dur0 = 0;
static void ss_dur4 ( void );
static int32_t ss_dur6 ( void );
static void mc2_0505_1 ( void );

int32_t ss_dur1 = 1;

void mc2_0505 ( void )
{
   static int32_t ss_dur2 = 0;
   static int32_t ss_dur3 = 0;
   static int32_t ss_dur8 = 0;
   static int32_t ss_dur9 = 0;

   use_int32 ( ss_dur0 );
   use_int32 ( ss_dur1 );
   use_int32 ( ss_dur3 );
   use_int32 ( ss_dur8 );
   use_int32 ( ss_dur9 );
   use_int32 ( ss_dur2 );

   /* Calling functions with internal linkage */

   mc2_0505_1 ( );
   ss_dur4    ( );
   ss_dur5    ( );

   /* Calling functions with external linkage */

   mc2_0505_3 ( );
   mc2_0505_2 ( );
}



static void mc2_0505_1 ( void )
{
   ss_dur0 = get_int32 ( );
   ss_dur1 = get_int32 ( );
}

static void ss_dur4 ( void )
{
   use_int32 ( 0 );
}

void ss_dur5 ( void )
{
   ss_dur0 = ss_dur6();
   ss_dur1 = ss_dur7();
}

static int32_t ss_dur6 ( void )
{
   return ss_dur0;
}

int32_t ss_dur7 ( void )
{
   return ss_dur1;
}


/* end of mc2_0505_1.c */
