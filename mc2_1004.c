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
 * 10.4 The value of a complex expression of floating type may only be cast to
 *      a narrower floating type.
 *
 */

#include "mc2_types.h"
#include "mc2_header.h"
#include "mc2_1000.h"

/*
 * s8r, s16r, s32r, s32r,
 * u8r, u16r, u32r, u64r,
 * f32r, f64r and f128r
 * included from mc2_1000.h
 */

void mc2_1004 ( void )
{
    float64_t  f64a  = get_float64 ( );
    float64_t  f64b  = get_float64 ( );

    s8r  = ( int8_t ) ( f64a + f64b );       /* Not compliant */
    s16r = ( int16_t ) ( f64a + f64b );      /* Not compliant */
    s32r = ( int32_t ) ( f64a + f64b );      /* Not compliant */
    s64r = ( int64_t ) ( f64a + f64b );      /* Not compliant */

    u8r  = ( uint8_t ) ( f64a + f64b );      /* Not compliant */
    u16r = ( uint16_t ) ( f64a + f64b );     /* Not compliant */
    u32r = ( uint32_t ) ( f64a + f64b );     /* Not compliant */
    u64r = ( uint64_t ) ( f64a + f64b );     /* Not compliant */

    f32r = ( float32_t ) ( f64a + f64b );    /* Compliant */
    f64r = ( float64_t ) ( f64a + f64b );    /* Compliant - Redundant Cast */
    f128r = ( float128_t ) ( f64a + f64b );  /* Not compliant */

    use_int8 ( s8r );
    use_int16 ( s16r );
    use_int32 ( s32r );
    use_int64 ( s64r );
    use_uint8 ( u8r );
    use_uint16 ( u16r );
    use_uint32 ( u32r );
    use_uint64 ( u64r );
    use_float32 ( f32r );
    use_float64 ( f64r );
    use_float128 ( f128r );
}


/* end of mc2_1004.c */
