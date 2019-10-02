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
 * 10.3 The value of a complex expression of integer type may only be cast to
 *      a type that is narrower and of the same signedness as the underlying
 *      type of the expression.
 *
 */

#include "mc2_types.h"
#include "mc2_header.h"
#include "mc2_1000.h"

/*
 * s8r, s16r, s32r, s64r,
 * u8r, u16r, u32r, u64r,
 * f32r, f64r, f128r,
 * s32a and s32b
 * included from mc2_1000.h
 */
int8_t     s8r   = 0;
int16_t    s16r  = 0;
int64_t    s64r  = 0;
uint8_t    u8r   = 0U;
uint16_t   u16r  = 0U;
uint32_t   u32r  = 0U;
uint64_t   u64r  = 0U;
float128_t f128r = 0.0L;

void mc2_1003 ( void )
{
    int16_t *  ps16 = get_int16_ptr ( );
    int16_t    array [ 10 ];
    int8_t     i;

    s32a = get_int32 ( );
    s32b = get_int32 ( );

    s8r  = ( int8_t )  ( s32a + s32b );       /* Compliant      */
    s16r = ( int16_t ) ( s32a + s32b );       /* Compliant      */
    s32r = ( int32_t ) ( s32a + s32b );       /* Compliant - Redundant cast */
    s64r = ( int64_t ) ( s32a + s32b );       /* Not compliant - see A1 and A2 */

    use_int32 ( s32r );
    use_int64 ( s64r );

    s32r = s32a + s32b;
    s64r = ( int64_t ) s32r;                  /* Compliant - A1 - 32 bit sum
                                               * converted to 64 bit          */

    use_int64 ( s64r );

    s64r = ( int64_t ) s32a + s32b;           /* Compliant - A2 - 64 bit
                                               * summation                    */

    u8r  = ( uint8_t )  ( s32a + s32b );      /* Not compliant  */
    u16r = ( uint16_t ) ( s32a + s32b );      /* Not compliant  */
    u32r = ( uint32_t ) ( s32a + s32b );      /* Not compliant  */
    u64r = ( uint64_t ) ( s32a + s32b );      /* Not compliant  */

    f32r =  ( float32_t )  ( s32a + s32b );   /* Not compliant  */
    f64r =  ( float64_t )  ( s32a + s32b );   /* Not compliant  */
    f128r = ( float128_t ) ( s32a + s32b );   /* Not compliant  */

    use_uint16 ( u16r );
    use_uint32 ( u32r );
    use_int16  ( s16r );
    use_int32  ( s32r );

    u32r = ( uint32_t ) ( u16r >> 2 );        /* Not compliant  */
    s32r = ( int32_t )  ( *ps16 + 1 );        /* Not compliant  */
    s16r = ( int16_t )  ( get_int8 ( ) + 1 ); /* Not compliant  */
    u16r = ( uint16_t ) ( ++u8r );            /* Not compliant  */
                                       /* Also not compliant with Rule 12.13 */

    for ( i = 0; i < 10; ++i )
    {
        array [ i ] = get_int16 ( );
    }
    i = get_int8 ( );
    use_int32 ( s32r );

    s32r = ( int32_t )array [ i + 1 ];        /* Compliant      */

    use_int32 ( s32r );
    s32r = ( int32_t ) ( *get_int8_ptr( ) );  /* Compliant      */

    use_int8 ( s8r );
    use_int16 ( s16r );
    use_int32 ( s32r );
    use_int64 ( s64r );
    use_uint8 ( u8r );
    use_uint16 ( u16r );
    use_uint32 ( u32r );
    use_uint64 ( u64r );
    use_float32 (f32r );
    use_float64 ( f64r );
    use_float128 ( f128r );
}



/* end of mc2_1003.c */
