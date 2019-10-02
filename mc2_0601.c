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
 * 6.1 The plain char type shall be used only for the storage and use of
 *     character values.
 */

#include "mc2_types.h"
#include "mc2_header.h"

static char_t mc2_0601a ( char_t plain_char_param );

void mc2_0601 ( void )
{
   int8_t numeric_value = 5;
   char_t character_value = 'a';                 /* Compliant */

   use_char ( character_value );
   character_value = ( char_t ) numeric_value;   /* Compliant - but
                                                  * implementation dependent */
   while ( character_value == numeric_value )    /* Not Compliant - types */
   {
      character_value = get_char ( );
      while ( character_value == '2' )
      {
         character_value = numeric_value;        /* Not Compliant */
         use_char ( character_value );
         character_value = 1;                    /* Not Compliant */
         use_char ( character_value );
         character_value = ( int8_t ) ' ';       /* Not Compliant */
         use_char ( character_value );
         character_value = get_char ( );
         while ( character_value != '\0' )
         {
            character_value = character_value + character_value; /* Not Compliant */
            character_value = character_value + ( char_t ) 1;    /* Not Compliant */
            character_value++;                                   /* Not Compliant */
            use_char ( character_value );
            character_value = get_char ( );
         }
      }
   }
   character_value = get_char ( );
   if ( character_value > 0 ) /* Not Compliant - conditional depends on */
   {                          /* signedness of plain char, which is */
                              /* implementation defined */
      character_value = '1';
   }

   /* Calling functions with internal linkage */

   character_value = mc2_0601a ( character_value );
   use_char ( character_value );
   use_int8 ( numeric_value );
}

static char_t mc2_0601a ( char_t plain_char_param )
{
   char_t plain_char_local;

   switch ( plain_char_param )
   {
      case 1:                                 /* Not Compliant */
         plain_char_local = ' ';
         break;
      case 'a':
         plain_char_local = '1';
         break;
      default:
         plain_char_local = '2';
         break;
   }
   return plain_char_local;
}

/* end of mc2_0601.c */
