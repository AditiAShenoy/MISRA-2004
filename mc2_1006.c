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
 * 10.6 A "U" suffix shall be applied to all constants of unsigned type.
 *
 */


#include "mc2_types.h"
#include "mc2_header.h"

void mc2_1006 ( void )
{

/**************************************

The type of an UNSUFFIXED DECIMAL integer constant is the first type in the
following list of types in which its value can be represented.

1. int
2. long
3. unsigned long

**************************************/

    use_int16  ( 32767 );               /* int constant */
    use_int32  ( 32768 );               /* int constant */
    use_int32  ( 65535 );               /* int constant */
    use_int32  ( 65536 );               /* int constant */
    use_int32  ( 2147483647 );          /* int constant */
    use_int64  ( 2147483648 );          /* long constant */
    use_uint64 ( 9223372036854775808 ); /* unsigned long constant */
                                        /* Not compliant */


/**************************************

The type of an UNSUFFIXED OCTAL or HEX integer constant is the first type in the
following list of types in which its value can be represented.

1. int
2. unsigned int
3. long
4. unsigned long

**************************************/

    use_int16  ( 0x7FFF );              /* int constant */
    use_int32  ( 0x8000 );              /* int constant */
    use_int32  ( 0xFFFF );              /* int constant */
    use_int32  ( 0x7FFFFFFF );          /* int constant */
    use_uint32 ( 0x80000000 );          /* unsigned int constant */
                                        /* Not compliant */
    use_int64  ( 0x7FFFFFFFFFFFFFFF );  /* long int constant */
    use_uint64 ( 0x8000000000000000 );  /* unsigned long int constant */
                                        /* Not compliant */


/**************************************

The type of a "U"-SUFFIXED integer constant is the first type in the
following list of types in which its value can be represented.

1. unsigned int
2. unsigned long

**************************************/

    use_uint16 ( 32767U );
    use_uint16 ( 32768U );
    use_uint16 ( 65535U );
    use_uint32 ( 65536U );
    use_uint32 ( 214748367U );
    use_uint32 ( 214748368U );

    use_uint16 ( 0x7FFFU );
    use_uint16 ( 0x8000U );
    use_uint16 ( 0xFFFFU );
    use_uint32 ( 0x10000U );
    use_uint32 ( 0x7FFFFFFFU );
    use_uint32 ( 0x80000000U );
    use_uint64 ( 0x7FFFFFFFFFFFFFFFU );
    use_uint64 ( 0x8000000000000000U );


/**************************************

The type of a "L"-SUFFIXED integer constant is the first type in the
following list of types in which its value can be represented.

1. long
2. unsigned long

**************************************/

    use_int64  ( 32767L );
    use_int64  ( 32768L );
    use_int64  ( 65535L );
    use_int64  ( 65536L );
    use_int64  ( 2147483647L );
    use_int64  ( 2147483648L );
    use_int64  ( 9223372036854775807L );  /* long constant */
    use_uint64 ( 9223372036854775808L );  /* unsigned long constant */
                                          /* Not compliant */

    use_int64  ( 0x7FFFL );
    use_int64  ( 0x8000L );
    use_int64  ( 0xFFFFL );
    use_int64  ( 0x10000L );
    use_int64  ( 0x7FFFFFFFL );
    use_int64  ( 0x80000000L );
    use_int64  ( 0x7FFFFFFFFFFFFFFFL );    /* long constant */
    use_uint64 ( 0x8000000000000000L );    /* unsigned long constant */
                                           /* Not compliant */


/**************************************

The type of a "UL"-SUFFIXED integer constant is always

1. unsigned long

**************************************/

    use_uint64 ( 32767UL );
    use_uint64 ( 32768UL );
    use_uint64 ( 65535UL );
    use_uint64 ( 65536UL );
    use_uint64 ( 2147483647UL );
    use_uint64 ( 2147483648UL );

    use_uint64 ( 0x7FFFUL );
    use_uint64 ( 0x8000UL );
    use_uint64 ( 0xFFFFUL );
    use_uint64 ( 0x10000UL );
    use_uint64 ( 0x7FFFFFFFUL );
    use_uint64 ( 0x80000000UL );


}


/* end of mc2_1006.c */
