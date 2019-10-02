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
 * 10.1 The value of an expression of integer type shall not be implicitly
 *      converted to a different underlying type if:
 *      a) it is not a conversion to a wider integer type of the same
 *         signedness, or
 *      b) the expression is complex, or
 *      c) the expression is not constant and is a function argument, or
 *      d) the expression is not constant and is a return expression
 *
 */

#include "mc2_types.h"
#include "mc2_header.h"
#include "mc2_1000.h"

/* u16r, u8a, u16a, s32a and s32b included from mc2_1000.h */
uint8_t    u8a   = 0U;
uint16_t   u16a  = 0U;
int32_t    s32a  = 0;
int32_t    s32b  = 0;

static uint32_t mc2_1001a ( void );
static uint32_t mc2_1001b ( void );
static uint32_t mc2_1001c ( void );

void mc2_1001 ( void )
{
   int8_t     s8a;
   int8_t     s8b;
   int16_t    s16a;
   int16_t    s16b;

   uint8_t    u8b;
   uint16_t   u16b;
   uint16_t   u16c;
   uint32_t   u32a;
   uint32_t   u32b;

   float32_t  f32a;
   float32_t  f32b;
   float32_t  f32c;


   u32a = get_uint16 ( );                               /* Compliant     */
   s8a  = get_int8 ( );
   s16b = get_int16 ( );
   s16a = s16b + s8a;                                   /* Compliant     */
   u16a = get_uint16 ( );
   u32b = u32a & u16a;                                  /* Compliant     */
   use_uint32 ( u32b );

/*********************************************
Conversion from signed to unsigned
**********************************************/

   u8a  = 0;                                            /* Not compliant */
   u32a += 1;                                           /* Not compliant */
   u16a = s8a;                                          /* Not compliant */
   use_uint16 ( s16a );                                 /* Not compliant */
   use_uint32 ( u32a + s16a );                          /* Not compliant */

/*********************************************
Conversion from unsigned to signed
**********************************************/

   s32b = 1u;                                           /* Not compliant */
   s16a = u8a;                                          /* Not compliant */
   s32a = s32b + u16a;                                  /* Not compliant */
   use_int32 ( u16a );                                  /* Not compliant */

/*********************************************
Conversion from integer to floating type
**********************************************/

   f32a = s16a;                                         /* Not compliant */
   f32b = 42;                                           /* Not compliant */
   f32c = 51u;                                          /* Not compliant */
   use_float32 ( s32a );                                /* Not compliant */

   use_float32 ( f32a );
   use_float32 ( f32b );
   use_float32 ( f32c );

/*********************************************
Conversion to narrower type
**********************************************/

   u16a = u32a;                                         /* Not compliant */
   use_uint16 ( u16a );
   u8a = u8a + get_uint8 ( );                           /* Compliant     */
   s8b = get_int8 ( );
   s8a = s8b + 100;                                     /* Compliant -
                                                         *     100 < 127 */
   s8a = s8a + 150;                                     /* Not compliant -
                                                         *     150 > 127 */


/*********************************************
Conversion of complex expression
**********************************************/

   s32a = s16a + s16b;                                  /* Not compliant */
   u16b = get_uint16 ( );
   u16c = get_uint16 ( );
   u32b = u16a + u16b;                                  /* Not compliant */
   use_uint32 ( u32b );

   u32a = get_uint32 ( ) + ( u16b * u16c );             /* Not compliant */
   use_uint32 ( u32a );
   u16a = u16b * u16c;                                  /* Compliant version of
   u32a = get_uint32 ( ) + u16a;                         * above non-compliance */

   u32b = get_uint32 ( ) + ( ( uint32_t )u16b * u16c ); /* Compliant - all
                                                         * operations are u32 */
   use_uint32 ( u32b );
   u32b = get_uint32 ( )
        + ( ( uint32_t )u16b * ( uint32_t )u16c );      /* Compliant     */
   use_uint32 ( u32b );
   u16a = u16b * u16c;                                  /* Compliant     */
   u32b = get_uint32 ( ) + u16a;                        /* Compliant     */

/*********************************************
Conversion of switch case labels
**********************************************/

   u8a = get_uint8 ( );
   u8b = get_uint8 ( );

   switch ( u8a + u8b )
   {
      case 3:                                           /* Not compliant */
      {
         use_uint32 ( u32a );
         break;
      }
      case 5u:                                          /* Compliant     */
      {
         use_uint32 ( u32a + u32b );
         break;
      }
      case 300u:                                        /* Not compliant */
      {
         break;
      }
      default:    /* empty default comment */
      {
         break;
      }
   }

   s8b = get_int8 ( );

   switch ( s8a + s8b )
   {
      case 4u:                                          /* Not compliant */
      {
         use_uint32 ( u32a );
         break;
      }
      case 5:                                           /* Compliant     */
      {
         use_uint32 ( u32a + u32b );
         break;
      }
      case 130:                                         /* Not compliant */
      {
         break;
      }
      default:    /* empty default comment */
      {
         break;
      }
   }

   u32a = mc2_1001a ( ) ;

/*********************************************
Conversion of function arguments
**********************************************/
   use_int16   ( s32a );                                /* Not compliant */
   use_uint16  ( u32a );                                /* Not compliant */
   use_uint16  ( u32b );                                /* Not compliant */
   use_uint32  ( u16a );                                /* Not compliant */
   use_float32 ( 1 );                                   /* Not compliant */
   use_int16   ( 5u );                                  /* Not compliant */
   use_uint32  ( 5 );                                   /* Not compliant */

}


/*********************************************
Conversion of function return expression
**********************************************/

static uint32_t mc2_1001a ( void )
{
   int32_t si32_1001;
   si32_1001 = mc2_1001b ( );       /* Not Compliant */
   use_int32 ( si32_1001 );
   si32_1001 = mc2_1001c ( );       /* Not Compliant */
   use_int32 ( si32_1001 );
   return ( 1u );                   /* Compliant     */
}

static uint32_t mc2_1001b ( void )
{
   if ( u16r == 1 )                 /* Not Compliant */
   {
      use_int16 ( u16r );           /* Not Compliant */
   }
   return 1000;                    /* Not Compliant - signed to unsigned
                                    * conversion */
}

static uint32_t mc2_1001c ( void )
{
   if ( u16r < 45 )                 /* Not Compliant */
   {
      use_int16 ( u16r );           /* Not Compliant */
   }

   return ( u16r );                 /* Not compliant - widening conversion */
}


/* end of mc2_1001.c */
