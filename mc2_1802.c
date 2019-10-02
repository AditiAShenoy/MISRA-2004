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
 * 18.2 An object shall not be assigned to an overlapping object
 */

#include "mc2_types.h"
#include "mc2_header.h"
#include <string.h>

/* It is not possible to create overlapping objects in C without using
 * non-standard features, e.g. #pragmas. Overlapping objects can also be created
 * by means of assembly language to define variables which overlap either
 * inlined or in external files..
 *
 * In general this is likely to be impossible to check statically since it is
 * not possible to know what a pointer pointers to. It may be possible to detect
 * some instances of overlapping objects however.
 */


static void icopy ( const char_t b1 [ ], char_t b2 [ ], int16_t n);

void mc2_1802 ( void )
{
    char_t buf [ ] = { "ABCDEFGHIJKLMNOPQRSTUVWXYZ" };

    icopy ( &buf [ 0 ], &buf [ 3 ], 6 );   /* Compliant - Behaviour is defined,
                                              but not as expected */

    (void) memcpy ( &buf [ 10 ], &buf [ 13 ], 6U ); /* Not compliant - relies on
                                                       undefined behaviour */

    (void) memmove ( &buf [ 10 ], &buf [ 13 ], 6U ); /* Compliant -
                                                            defined behaviour */
}

static void icopy ( const char_t b1 [ ], char_t b2 [ ], int16_t n )
{
    int16_t b_index;

    for ( b_index = 0; b_index < n; ++b_index )
    {
        b2 [ b_index ] = b1 [ b_index ];
    }

    return;
}

/* end of mc2_1802.c */
