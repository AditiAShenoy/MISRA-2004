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
 *  20.7  The setjmp and the the longjmp function  shall not be used.
 */

#include "mc2_types.h"
#include "mc2_header.h"
#include  <setjmp.h>

static jmp_buf mc2_2007_myenv;

static void mc2_2007_func ( int8_t p );

void mc2_2007 ( void )
{
    int16_t mc2_2007_istat;


    if ( !setjmp ( mc2_2007_myenv ) ) /* Not Compliant rule 20.7 */

    {
      mc2_2007_func ( 10 );

    }
    else
    {

    }
    use_int16 ( mc2_2007_istat );
}

static void mc2_2007_func ( int8_t p )
{
  if( p == 10 )
  {
    longjmp ( mc2_2007_myenv, 9 );
  }

}

/* end of mc2_2007.c */

