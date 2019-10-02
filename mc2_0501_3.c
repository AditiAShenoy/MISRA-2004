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
 * 5.1 Identifiers (internal and external) shall not rely on the significance of
 *     more than 31 characters.
 */

/* This file also contains violations of Rules 5.6, 5.7 */

/* tags and components */

#include "mc2_types.h"
#include "mc2_header.h"
#include "mc2_0501_2.h"

/* The following two lines are not compliant with both Rule 5.1 and Rule 19.4 */
#define name_06_cm_xxxxxxxxxxxxxxxxxx31a name_07
#define name_08_tm_xxxxxxxxxxxxxxxxxx31a name_09


static void name_02_cf_xxxxxxxxxxxxxxxxxx31b ( void );       /* Not Compliant */
static void name_02_cf_xxxxxxxxxxxxxxxxxx31b ( void )
{
   use_int32 ( 0 ); /* Do Something */
}

static void name_03_tf_xxxxxxxxxxxxxxxxxx31b ( void );       /* Not Compliant */
static void name_03_tf_xxxxxxxxxxxxxxxxxx31b ( void )
{
   use_int32 ( 0 ); /* Do Something */
}


void mc2_0501_ct ( void )
{

   /* component vs function - clashes with function
    * name_02_cf_xxxxxxxxxxxxxxxxxx31b */

   struct name_01
   {
      int32_t name_02_cf_xxxxxxxxxxxxxxxxxx31a;              /* Not Compliant */
   };

   /* tag vs function - clashes with function
    * name_03_tf_xxxxxxxxxxxxxxxxxx31b */

   struct name_03_tf_xxxxxxxxxxxxxxxxxx31a                   /* Not Compliant */
   {
      int32_t name_04;
   };

   /* component vs macro */

   struct name_05
   {
      int32_t name_06_cm_xxxxxxxxxxxxxxxxxx31b;              /* Not Compliant */
   };

   /* tag vs macro */

   struct name_08_tm_xxxxxxxxxxxxxxxxxx31b                   /* Not Compliant */
   {
      int32_t name_10;
   };

   /* component vs tag */

   struct name_11_ct_xxxxxxxxxxxxxxxxxx31a                   /* Not Compliant */
   {
      int32_t name_11_ct_xxxxxxxxxxxxxxxxxx31b;              /* Not Compliant */
   };

   /* tag vs tag */

   struct name_12_tt_xxxxxxxxxxxxxxxxxx31a                   /* Not Compliant */
   {
      int32_t name_13;
   };

   struct name_12_tt_xxxxxxxxxxxxxxxxxx31b                   /* Not Compliant */
   {
      int32_t name_14;
   };

   /* component vs enumeration constant */

   struct name_15
   {
      int32_t name_16_ce_xxxxxxxxxxxxxxxxxx31a;              /* Not Compliant */
   };

   enum name_17
   {
      name_16_ce_xxxxxxxxxxxxxxxxxx31b                       /* Not Compliant */
   };

   /* tag vs enumeration constant */

   struct name_18_te_xxxxxxxxxxxxxxxxxx31a                   /* Not Compliant */
   {
      int32_t name_19;
   };

   enum name_20
   {
      name_18_te_xxxxxxxxxxxxxxxxxx31b                       /* Not Compliant */
   };

   /* component vs typedef */

   struct name_21
   {
      int32_t name_22_cy_xxxxxxxxxxxxxxxxxx31a;              /* Not Compliant */
   };

   typedef int32_t name_22_cy_xxxxxxxxxxxxxxxxxx31b;         /* Not Compliant */

   /* tag vs typedef */

   struct name_23_ty_xxxxxxxxxxxxxxxxxx31a                   /* Not Compliant */
   {
      int32_t name_24;
   };

   typedef int32_t name_23_ty_xxxxxxxxxxxxxxxxxx31b;         /* Not Compliant */

   /* component vs variable */

   struct name_25
   {
      int32_t name_26_cv_xxxxxxxxxxxxxxxxxx31a;              /* Not Compliant */
   };

   int32_t name_26_cv_xxxxxxxxxxxxxxxxxx31b = get_int32 ( ); /* Not Compliant */

   /* tag vs variable */

   struct name_27_tv_xxxxxxxxxxxxxxxxxx31a                   /* Not Compliant */
   {
      int32_t name_28;
   };

   int32_t name_27_tv_xxxxxxxxxxxxxxxxxx31b = get_int32 ( ); /* Not Compliant */

   /* component vs component */

   struct name_29
   {
      int32_t name_30_cc_xxxxxxxxxxxxxxxxxx31a;              /* Not Compliant */
   };

   struct name_31
   {
      int32_t name_30_cc_xxxxxxxxxxxxxxxxxx31b;              /* Not Compliant */
   };

   /* component and tag vs label */

   struct name_32_tl_xxxxxxxxxxxxxxxxxx31a                   /* Not Compliant */
   {
      int32_t name_33_cl_xxxxxxxxxxxxxxxxxx31a;              /* Not Compliant */
   };

   /* Initialisation */

   struct name_01 iname_01;
   struct name_03_tf_xxxxxxxxxxxxxxxxxx31a iname_03;
   struct name_05 iname_05;
   struct name_08_tm_xxxxxxxxxxxxxxxxxx31b iname_08;
   struct name_11_ct_xxxxxxxxxxxxxxxxxx31a iname_11;
   struct name_12_tt_xxxxxxxxxxxxxxxxxx31a iname_12a;
   struct name_12_tt_xxxxxxxxxxxxxxxxxx31b iname_12b;
   struct name_15 iname_15;
   enum name_17 iname_17 = name_16_ce_xxxxxxxxxxxxxxxxxx31b;
   struct name_18_te_xxxxxxxxxxxxxxxxxx31a iname_18;
   enum name_20 iname_20 = name_18_te_xxxxxxxxxxxxxxxxxx31b;
   struct name_21 iname_21;
   struct name_23_ty_xxxxxxxxxxxxxxxxxx31a iname_23a;
   struct name_25 iname_25;
   struct name_27_tv_xxxxxxxxxxxxxxxxxx31a iname_27;
   struct name_29 iname_29;
   struct name_31 iname_31;
   struct name_32_tl_xxxxxxxxxxxxxxxxxx31a iname_32;
   int32_t name_06_cm_xxxxxxxxxxxxxxxxxx31a            = get_int32 ( );
   int32_t name_08_tm_xxxxxxxxxxxxxxxxxx31a            = get_int32 ( );
   name_22_cy_xxxxxxxxxxxxxxxxxx31b iname_22           = get_int32 ( );
   name_23_ty_xxxxxxxxxxxxxxxxxx31b iname_23b          = get_int32 ( );

   iname_01.name_02_cf_xxxxxxxxxxxxxxxxxx31a           = get_int32 ( );
   iname_03.name_04                                    = get_int32 ( );
   iname_05.name_06_cm_xxxxxxxxxxxxxxxxxx31b           = get_int32 ( );
   iname_08.name_10                                    = get_int32 ( );
   iname_11.name_11_ct_xxxxxxxxxxxxxxxxxx31b           = get_int32 ( );
   iname_12a.name_13                                   = get_int32 ( );
   iname_12b.name_14                                   = get_int32 ( );
   iname_15.name_16_ce_xxxxxxxxxxxxxxxxxx31a           = get_int32 ( );
   iname_18.name_19                                    = get_int32 ( );
   iname_21.name_22_cy_xxxxxxxxxxxxxxxxxx31a           = get_int32 ( );
   iname_23a.name_24                                   = get_int32 ( );
   iname_25.name_26_cv_xxxxxxxxxxxxxxxxxx31a           = get_int32 ( );
   iname_27.name_28                                    = get_int32 ( );
   iname_29.name_30_cc_xxxxxxxxxxxxxxxxxx31a           = get_int32 ( );
   iname_31.name_30_cc_xxxxxxxxxxxxxxxxxx31b           = get_int32 ( );
   iname_32.name_33_cl_xxxxxxxxxxxxxxxxxx31a           = get_int32 ( );

   /* Usage */

   use_int32 ( iname_01.name_02_cf_xxxxxxxxxxxxxxxxxx31a );

   /* component vs label */

name_33_cl_xxxxxxxxxxxxxxxxxx31a:                  /* Label Not Compliant 5.1 */

   use_int32 ( iname_03.name_04 );

   /* tag vs label */

name_32_tl_xxxxxxxxxxxxxxxxxx31a:                  /* Label Not Compliant 5.1 */

   use_int32 ( iname_05.name_06_cm_xxxxxxxxxxxxxxxxxx31b );
   use_int32 ( name_06_cm_xxxxxxxxxxxxxxxxxx31a );
   use_int32 ( name_06_cm_xxxxxxxxxxxxxxxxxx31a );
   use_int32 ( iname_08.name_10 );
   use_int32 ( name_08_tm_xxxxxxxxxxxxxxxxxx31a );
   use_int32 ( iname_11.name_11_ct_xxxxxxxxxxxxxxxxxx31b );
   use_int32 ( iname_12a.name_13 );
   use_int32 ( iname_12b.name_14 );
   use_int32 ( iname_15.name_16_ce_xxxxxxxxxxxxxxxxxx31a );
   /* use_name_17 ( iname_17 ); some tools may flag iname_17 as unused */
   use_int32 ( iname_18.name_19 );
   /* use_name_20 ( iname_20 ); some tools may flag iname_20 as unused */
   use_int32 ( iname_21.name_22_cy_xxxxxxxxxxxxxxxxxx31a );
   use_int32 ( iname_22 );
   use_int32 ( iname_23a.name_24 );
   use_int32 ( iname_23b );
   use_int32 ( iname_25.name_26_cv_xxxxxxxxxxxxxxxxxx31a );
   use_int32 ( iname_27.name_28 );
   use_int32 ( iname_29.name_30_cc_xxxxxxxxxxxxxxxxxx31a );
   use_int32 ( iname_31.name_30_cc_xxxxxxxxxxxxxxxxxx31b );
   use_int32 ( iname_32.name_33_cl_xxxxxxxxxxxxxxxxxx31a );
   name_02_cf_xxxxxxxxxxxxxxxxxx31b ( );
   name_03_tf_xxxxxxxxxxxxxxxxxx31b ( );
   use_int32 ( name_26_cv_xxxxxxxxxxxxxxxxxx31b );
   use_int32 ( name_27_tv_xxxxxxxxxxxxxxxxxx31b );
}


/* end of mc2_0501_3.c */
