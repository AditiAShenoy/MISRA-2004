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
 * 6.2 Signed and unsigned char type shall be used only for the storage and use
 *     of numeric values.
 */


#include "mc2_types.h"
#include "mc2_header.h"

static int8_t mc2_0602a ( int8_t signed_numeric_param );

void mc2_0602 ( void )
{
   int8_t signed_numeric_value;
   uint8_t unsigned_numeric_value = 0U; /* U to comply with Rule 10.6 */
   char_t plain_character_data = get_char ( );


   /* Following line is compliant, but implementation dependent */
   signed_numeric_value = ( int8_t ) plain_character_data;
   while ( signed_numeric_value == '1' )                /* Not Compliant */
   {
      unsigned_numeric_value = plain_character_data;    /* Not Compliant - types
                                                         * as cannot assume
                                                         * signednees of char */
      signed_numeric_value = 'a';                       /* Not Compliant */
      use_int8 ( signed_numeric_value );
      signed_numeric_value = ( char_t ) 1;              /* Not Compliant */
   }

   /* Usage */

   use_uint8 ( unsigned_numeric_value );
   use_int8  ( signed_numeric_value );

   /* Calling functions with internal linkage */

   signed_numeric_value = mc2_0602a ( signed_numeric_value );
   use_int8  ( signed_numeric_value );
}

static int8_t mc2_0602a ( int8_t signed_numeric_param )
{
   int8_t signed_numeric_local;
   switch ( signed_numeric_param )
   {
      case 1:
         signed_numeric_local = 1;
         break;
      case 'a':                                            /* Not Compliant */
         signed_numeric_local = 2;
         break;
      default:
         signed_numeric_local = 3;
         break;
   }
   return signed_numeric_local;
}

/* end of mc2_0602.c */
