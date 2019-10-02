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
 * 10.5 if the bitwise operators ~ and << are applied to an operand of
 *      underlying type unsigned char or unsigned short, the result shall be
 *      immediately cast to the underlying type of the operand.
 *
 */

#include "mc2_types.h"
#include "mc2_header.h"
#include "mc2_1000.h"

/* u8a, u16a, u8r and u16r included from mc2_1000.h */

void mc2_1005 ( void )
{
    u8a  = get_uint8 ( );
    u16a = get_uint16 ( );

/*******************************************************************************
Casts have not been applied in the following examples
   - see below for compliant versions
*******************************************************************************/

    u8r = ~u8a >> 4;                    /* Not compliant */
    u16r = ( u16a << 2 ) >> 4;          /* Not compliant */
    use_uint8  ( u8r  );
    use_uint16 ( u16r );

    u8r = ( 0x12U << 2 ) >> 4;          /* Not compliant */
    u16r = ~0x1234U >> 4;               /* Not compliant */
    use_uint8  ( u8r  );
    use_uint16 ( u16r );


/*******************************************************************************
Casts are applied in these examples.
Casts to int or long types are not strictly necessary but contribute to code
portability.
*******************************************************************************/

    u8r = ( uint8_t ) ~u8a >> 4;
    u16r = ( uint16_t ) ( u16a << 2 ) >> 4;
    use_uint8  ( u8r  );
    use_uint16 ( u16r );

    u8r = ( uint8_t ) ( 0x10U << 2 ) >> 4;
    u16r = ( uint16_t ) ~0x1234U >> 4;
    use_uint8  ( u8r  );
    use_uint16 ( u16r );


/*******************************************************************************
In these examples the expression is followed by an assignment to the underlying
type. These do not require a cast.

See the MISRA-C:2004 Technical Clarification
*******************************************************************************/

    u8r = ~u8a;                         /* Compliant */
    u16r = u16a << 2;                   /* Compliant */
    use_uint8  ( u8r  );
    use_uint16 ( u16r );

    u8r = ~0x12U;                       /* Compliant - 0xED is assigned,
                                             upper byte(s) 0xFF are discarded */
    u16r = 0x1234U << 2;                /* Compliant */
    use_uint8  ( u8r  );
    use_uint16 ( u16r );

/*******************************************************************************
Compliant versions with cast, as required prior to the Technical Clarification
*******************************************************************************/

    u8r = ( uint8_t ) ~u8a;                 /* Compliant - but violates 10.3 */
    u16r = ( uint16_t ) ( u16a << 2 );      /* Compliant - but violates 10.3 */
    use_uint8  ( u8r  );
    use_uint16 ( u16r );

    u8r = ( uint8_t ) ~0x12U;               /* Compliant - but violates 10.3 */
    u16r = ( uint16_t ) ( 0x1234U << 2 );   /* Compliant - but violates 10.3 */
    use_uint8  ( u8r  );
    use_uint16 ( u16r );

}


/* end of mc2_1005.c */
