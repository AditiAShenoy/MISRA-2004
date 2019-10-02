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
 * 16.6 The number of arguments passed to a function shall match the
 * number of parameters.
 */

#include "mc2_types.h"
#include "mc2_header.h"

extern int16_t mc2_1606a ( int16_t param_1606a );
extern int16_t mc2_1606b ( void );

int16_t mc2_1606a ( int16_t param_1606a )
{
   return param_1606a;
}

int16_t mc2_1606b ( void )
{
   return 0;
}


/* end of mc2_1606_2.c */

