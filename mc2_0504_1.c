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
 * 5.4 A tag name shall be a unique identifier.
 */

/* Unions are banned by Rule 18.4 (R) */
/* This file also contains violations of Rules 5.6, 5.7 */

#include "mc2_types.h"
#include "mc2_header.h"
#include "mc2_0504_1.h"

struct n_compliant_tag              /* Not Compliant - tag with same name    */
{                                   /* used in mc2_0504_2.c and mc2_0504_3.c */
   int8_t n_t_component;
};


static struct compliant_tag mc2_0504_1a ( void );

static struct compliant_tag mc2_0504_1a ( void )
{
  struct tag_var                           /* Not Compliant                  */
  {
     int32_t tag_component7;
  }
  tag_var_clash;
  struct compliant_tag c_tag1 = { 0 };     /* Compliant inclusion in multiple
                                            * files via header file          */
  int32_t tag_var = get_int32 ( );         /* Not Compliant                  */

  tag_var_clash.tag_component7 = tag_var;
  use_int32 ( tag_var_clash.tag_component7 );
tag_label:
   return c_tag1;
}

/* Tag vs Function Identifier */

static void mc2_0504_1b ( void );          /* Not Compliant                  */

static void mc2_0504_1b ( void )
{
   struct mc2_0504_1b                      /* Not Compliant -                */
   {                                       /* Tag clashes with function name */
      int32_t tag_component5;
   }
   f_tag_clash;

   f_tag_clash.tag_component5 = get_int32 ( );
   use_int32 ( f_tag_clash.tag_component5 );
}



static void mc2_0504_1c ( int32_t tag_param ); /* Not Compliant              */

static void mc2_0504_1c ( int32_t tag_param )
{
   struct tag_param                            /* Not Compliant -            */
   {                                           /* Tag clashes with parameter */
      int32_t tag_component6;
   }
   tag_param_1;
   tag_param_1.tag_component6 = tag_param;
   use_int32 ( tag_param_1.tag_component6 );
}

void mc2_0504 ( void )
{
   int32_t count54;
   struct compliant_tag compliant_tag_1a;
   struct n_compliant_tag nct_54;

   struct tag_label                             /* Not Compliant             */
   {
      int32_t tag_component0;
   }
   tag_label1;

   for ( count54 = 0; count54 < 1; count54++ )
   {
      struct tag_name                           /* Not Compliant             */
      {
         int32_t tag_component1;
      }
      tag_name1;
      tag_name1.tag_component1 = get_int32 ( );
      use_int32 ( tag_name1.tag_component1 );
   }

   for ( count54 = 0; count54 < 1; count54++ )
   {
      struct tag_name                           /* Not Compliant             */
      {
         int32_t tag_component2;
      }
      tag_name2;
      tag_name2.tag_component2 = get_int32 ( );
      use_int32 ( tag_name2.tag_component2 );
   }

   for ( count54 = 0; count54 < 1; count54++ )
   {
      union tag_name                            /* Not Compliant 5.4 18.4    */
      {
         int32_t tag_component3;
         char_t tag_component4;
      }
      tag_name3;
      tag_name3.tag_component3 = get_int32 ( );
      use_int32 ( tag_name3.tag_component3 );
      tag_name3.tag_component4 = get_char ( );
      use_char ( tag_name3.tag_component4 );
   }

   for ( count54 = 0; count54 < 1; count54++ )
   {
      enum tag_name                             /* Not Compliant             */
      {
         tag_enum
      }
      t_enum54;
      enum enumtag_var                          /* Not Compliant             */
      {
         enumtag_const
      }
      enumtag_var_clash;
      int32_t enumtag_var = get_int32 ( );      /* Not Compliant             */
      t_enum54 = tag_enum;
      enumtag_var_clash = enumtag_const;
      /* use_tag_name ( t_enum54 );            some tools may flag t_enum54 as
       *                                       unused */
      /* use_enumtag_var( enumtag_var_clash ); some tools may flag
       *                                       enumtag_var_clash as unused */
      use_int32 ( enumtag_var );
   }

   /* Usage */
   tag_label1.tag_component0 = get_int32 ( );
   use_int32 ( tag_label1.tag_component0 );
   nct_54.n_t_component = get_int8 ( );
   use_int8 ( nct_54.n_t_component );

   /* Calling functions with internal linkage */

   compliant_tag_1a = mc2_0504_1a ( );
   mc2_0504_1b ( );
   mc2_0504_1c ( get_int32 ( ) );
   use_int32 ( compliant_tag_1a.tag_component );

   /* Calling functions with external linkage */

   compliant_tag_1a = mc2_0504_2 ( );

   use_int32 ( compliant_tag_1a.tag_component );
}


/* end of mc2_0504_1.c */

