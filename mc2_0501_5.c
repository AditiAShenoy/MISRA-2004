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

/* functions + macros, not including tags + components + typedefs */

#include "mc2_types.h"
#include "mc2_header.h"
#include "mc2_0501_2.h"

#define name_42_fm_xxxxxxxxxxxxxxxxxx31a name_43          /* Not Compliant
                                                           * - also Rule 19.4 */
#define name_44_me_xxxxxxxxxxxxxxxxxx31a name_45          /* Not Compliant
                                                           * - also Rule 19.4 */
#define name_46_mv_xxxxxxxxxxxxxxxxxx31a name_47          /* Not Compliant
                                                           * - also Rule 19.4 */
#define name_48_ml_xxxxxxxxxxxxxxxxxx31a name_49          /* Not Compliant
                                                           * - also Rule 19.4 */

static void name_50_fe_xxxxxxxxxxxxxxxxxx31a ( void );    /* Not Compliant */
static void name_50_fe_xxxxxxxxxxxxxxxxxx31a ( void )
{
   use_int32 ( 0 );  /* Do something */
}

static void name_51_fv_xxxxxxxxxxxxxxxxxx31a ( void );    /* Not Compliant */
static void name_51_fv_xxxxxxxxxxxxxxxxxx31a ( void )
{
   use_int32 ( 0 );  /* Do something */
}

static void name_52_fl_xxxxxxxxxxxxxxxxxx31a ( void );    /* Not Compliant */
static void name_52_fl_xxxxxxxxxxxxxxxxxx31a ( void )
{
   use_int32 ( 0 );  /* Do something */
}

/* function vs macro */

static void name_42_fm_xxxxxxxxxxxxxxxxxx31b ( void );   /* Not Compliant */
static void name_42_fm_xxxxxxxxxxxxxxxxxx31b ( void )
{
   use_int32 ( 0 );  /* Do something */
}

void mc2_0501_fm ( void )
{
   /* function vs enumeration constant */

   enum name_53
   {
      name_50_fe_xxxxxxxxxxxxxxxxxx31b                  /* Not Compliant */
   };

   /* macro vs enumeration constant */

   enum name_54
   {
      name_44_me_xxxxxxxxxxxxxxxxxx31b                  /* Not Compliant */
   };

   /* function vs variable */

   int32_t name_51_fv_xxxxxxxxxxxxxxxxxx31b;            /* Not Compliant */

   /* macro vs variable */

   int32_t name_46_mv_xxxxxxxxxxxxxxxxxx31b;            /* Not Compliant */


   /* Initialisation */

   int32_t name_42_fm_xxxxxxxxxxxxxxxxxx31a            = get_int32 ( );
   int32_t name_44_me_xxxxxxxxxxxxxxxxxx31a            = get_int32 ( );
   int32_t name_46_mv_xxxxxxxxxxxxxxxxxx31a            = get_int32 ( );
   int32_t name_48_ml_xxxxxxxxxxxxxxxxxx31a            = get_int32 ( );
   enum name_53 iname_53 = name_50_fe_xxxxxxxxxxxxxxxxxx31b;
   enum name_54 iname_54 = name_44_me_xxxxxxxxxxxxxxxxxx31b;
   name_51_fv_xxxxxxxxxxxxxxxxxx31b                    = get_int32 ( );
   name_46_mv_xxxxxxxxxxxxxxxxxx31b                    = get_int32 ( );


   /* Usage */

   use_int32 ( name_42_fm_xxxxxxxxxxxxxxxxxx31a );

   /* function vs label */

name_52_fl_xxxxxxxxxxxxxxxxxx31b:                 /* Label Not Compliant */

   use_int32 ( name_44_me_xxxxxxxxxxxxxxxxxx31a );

   /* macro vs label */

name_48_ml_xxxxxxxxxxxxxxxxxx31b:                 /* Label Not Compliant */

   use_int32 ( name_46_mv_xxxxxxxxxxxxxxxxxx31a );
   use_int32 ( name_48_ml_xxxxxxxxxxxxxxxxxx31a );
   /* use_name53 ( iname_53 ); some tools may flag iname_53 as unused */
   /* use_name54 ( iname_54 ); some tools may flag iname_54 as unused */
   use_int32 ( name_51_fv_xxxxxxxxxxxxxxxxxx31b );
   use_int32 ( name_46_mv_xxxxxxxxxxxxxxxxxx31b );

   name_50_fe_xxxxxxxxxxxxxxxxxx31a ( );
   name_51_fv_xxxxxxxxxxxxxxxxxx31a ( );
   name_52_fl_xxxxxxxxxxxxxxxxxx31a ( );
   name_42_fm_xxxxxxxxxxxxxxxxxx31b ( );
}

/* end of mc2_0501_5.c */
