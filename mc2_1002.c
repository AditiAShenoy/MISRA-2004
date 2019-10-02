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
 * 10.2 The value of an expression of floating type shall not be implicitly
 *      converted to a different underlying type if:
 *      a) it is not a conversion to a wider floating type, or
 *      b) the expression is complex, or
 *      c) the expression is a function argument, or
 *      d) the expression is a return expression
 *
 */

/* ASSUMPTION
 *
 * FLOAT (single-precision) is 32 bits
 * DOUBLE (double-precision) is 64 bits
 *
 * Use of suffix F is dependent on this assumption.
 *
 */

#include "mc2_types.h"
#include "mc2_header.h"
#include "mc2_1000.h"

/* s32r, f32r and f64r included from mc2_1000.h */
int32_t    s32r  = 0;
float32_t  f32r  = 0.0;    /* Non Compliant */
float64_t  f64r  = 0.0;

static float32_t mc2_1002a ( float64_t f64p );
static float32_t mc2_1002b ( void );
static float32_t mc2_1002c ( void );
static float64_t mc2_1002d ( float32_t f32p );
static float64_t mc2_1002e ( void );
static float64_t mc2_1002f ( void );
static float64_t mc2_1002g ( void );


void mc2_1002 ( void )
{
    float32_t f32s = get_float32 ( );
    float32_t f32t = get_float32 ( );

    f64r = get_float32 ( );         /* Compliant - conversion to wider floating
                                     *             type                       */
    use_float64 ( f64r );

    f32r = get_float64 ( );         /* Not compliant - conversion to narrower
                                     *                 floating type          */
    use_float32 ( f32r );

    use_float32 ( f64r );           /* Not compliant - conversion to narrower
                                     *                 floating type          */

    s32r = get_float64 ( );         /* Not compliant - conversion to integer
                                     *                 type                   */
    use_int32 ( s32r );

    use_float64 ( f32r );           /* Not compliant - conversion of function
                                     *                 argument               */

    f64r = get_float32 ( ) + f32r;  /* Not compliant - conversion of complex
                                     *                 expression             */

    f64r = f64r + (f32s + f32t);    /* Not compliant - conversion of complex
                                     *                 expression             */

    f32r = f32s * f32t;             /* Compliant example of previous
                                     * non-compliance                         */
    f64r = f64r + f32r;             /* continued                              */

    f64r = f64r + ( (float64_t) f32s * f32t ); /* Compliant - conversion of
                                                       complex expression     */

    f32r = mc2_1002a ( f64r );
    use_float32 ( f32r );
    f32r = mc2_1002b ( );
    use_float32 ( f32r );
    f32r = mc2_1002c ( );
    use_float32 ( f32r );
    f64r = mc2_1002d ( f32r );
    use_float64 ( f64r );
    f64r = mc2_1002e ( );
    use_float64 ( f64r );
    f64r = mc2_1002f ( );
    use_float64 ( f64r );
    f64r = mc2_1002g ( );
    use_float64 ( f64r );

}

/*
 * conversion of return expression
 */

static float32_t mc2_1002a ( float64_t f64p )
{
    return ( f64p );                      /* Not compliant */
}

static float32_t mc2_1002b ( void )
{
    return ( 1.23 );                      /* Not compliant */
}

static float32_t mc2_1002c ( void )
{
    return ( 1.23F );                     /* Compliant */
}

static float64_t mc2_1002d ( float32_t f32p )
{
    return ( f32p );                      /* Not compliant */
}

static float64_t mc2_1002e ( void )
{
    return ( 1.23F );                     /* Not compliant (unless float64_t is
                                           * float)                           */
}

static float64_t mc2_1002f ( void )
{
    return ( 1.23 );                      /* Compliant  (only if float64_t is
                                           * double)                          */
}

static float64_t mc2_1002g ( void )
{
    return ( ( float64_t ) 1.23 );        /* Compliant - all architectures    */
}

/* end of mc2_1002.c */
