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
 * 5.3 A typedef name shall be a unique identifier.
 */

/*  This file also contains violations of Rules 5.2, 5.4, 5.6 and 5.7 */


#include "mc2_types.h"
#include "mc2_header.h"
#include "mc2_0503.h"

static void mc2_0503a ( int32_t unique_type5 ); /* Parameter Not Compliant */
static void function53 ( void );                /* Not Compliant */

void mc2_0503 ( void )
{
   int32_t param53 = get_int32 ( );
   typedef int32_t unique_type1;
   typedef int16_t unique_type2;
   typedef int8_t unique_type3;
   typedef char_t unique_type4;
   typedef float32_t unique_type5;
   typedef float64_t unique_type6;

   struct struct53
   {
      unique_type1 unique_type1;   /* Not Compliant */
   };
   compliant_type type_compliant; /* Compliant inclusion in multiple files */
                                  /* via header file */

   /* Usage */

   unique_type1 uni_type1 = get_int32   ( );
   unique_type2 uni_type2 = get_int16   ( );
   unique_type3 uni_type3 = get_int8    ( );
   unique_type4 uni_type4 = get_char    ( );
   unique_type5 uni_type5 = get_float32 ( );
   unique_type6 uni_type6 = get_float64 ( );
   struct struct53 str53;

   use_int32   ( uni_type1 );
   use_int16   ( uni_type2 );
   use_int8    ( uni_type3 );
   use_char    ( uni_type4 );
   use_float32 ( uni_type5 );
   use_float64 ( uni_type6 );
   str53.unique_type1 = get_int32 ( );
   use_int32 ( str53.unique_type1 );

   /* Calling functions with internal linkage */

   mc2_0503a ( param53 );
   function53 ( );

   /* Calling functions with external linkage */

   type_compliant = mc2_0503_2 ( );
   use_uint8 ( type_compliant );
}


static void mc2_0503a ( int32_t unique_type5 )  /* Parameter Not Compliant */
{
   int32_t unique_type1 = get_int32 ( );        /* Not Compliant */
   enum
   {
      unique_type2                              /* Not Compliant */
   }
   enum53 = unique_type2;
   struct unique_type3                          /* Not Compliant */
   {
      int32_t unique_type4;                     /* Not Compliant */
   } str_uni_3;

   str_uni_3.unique_type4 = unique_type5;
unique_type6:                                   /* Not Compliant */
   use_int32 ( unique_type1 );
   use_int32 ( str_uni_3.unique_type4 );
   /* use_enum ( enum53 ); some tools may flag enum53 as unused */
}

static void function53 ( void )                 /* Not Compliant */
{
   use_int32 ( 0 ); /* Clashes with typedef in mc2_0503_2.c */
}

/* end of mc2_0503_1.c */
