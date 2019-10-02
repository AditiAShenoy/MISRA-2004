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
 * 9.2 Braces shall be used to indicate and match the structure in the
 *     non-zero initialisation of arrays and structures.
 */

#include "mc2_types.h"
#include "mc2_header.h"

#define ARRAY_SIZE 5U

static void mc2_0902_b ( void );

typedef struct mc2_0902_tag_1
{
   int32_t mc2_0902_member_1;
} mc2_0902_type_1;

typedef struct mc2_0902_tag_2
{
          int32_t         mc2_0902_member_2;
          mc2_0902_type_1 mc2_0902_member_3;
   struct mc2_0902_tag_1  mc2_0902_member_4;
} mc2_0902_type_2;


static        int32_t mc2_0902_array_1 [ ARRAY_SIZE ] = { 0 };   /*     Compliant */
static        int32_t mc2_0902_array_2 [ ARRAY_SIZE ] = { 0 , 1, 2, 3, 4 }; /* Compliant */
static        int32_t mc2_0902_array_3 [ ARRAY_SIZE ] = { 1 };   /* Not Compliant */

static        mc2_0902_type_1 mc2_0902_1  = { 0 };               /*     Compliant */
static        mc2_0902_type_1 mc2_0902_2  = { 1 };               /*     Compliant */

static struct mc2_0902_tag_1  mc2_0902_3  = { 0 };               /*     Compliant */
static struct mc2_0902_tag_1  mc2_0902_4  = { 1 };               /*     Compliant */

static        mc2_0902_type_2 mc2_0902_9  = { 1, { 2 }, { 3 } }; /*     Compliant */
static        mc2_0902_type_2 mc2_0902_10 = { 1,   2  , { 3 } }; /* Not Compliant */
static        mc2_0902_type_2 mc2_0902_11 = { 1, { 2 },   3   }; /* Not Compliant */
static        mc2_0902_type_2 mc2_0902_12 = { 1,   2  ,   3   }; /* Not Compliant */

static struct mc2_0902_tag_2  mc2_0902_13 = { 2, { 3 }, { 4 } }; /*     Compliant */
static struct mc2_0902_tag_2  mc2_0902_14 = { 2,   3  , { 4 } }; /* Not Compliant */
static struct mc2_0902_tag_2  mc2_0902_15 = { 2, { 3 },   4   }; /* Not Compliant */
static struct mc2_0902_tag_2  mc2_0902_16 = { 2,   3  ,   4   }; /* Not Compliant */

void mc2_0902 ( void )
{
          int32_t mc2_0902_array_4 [ ARRAY_SIZE ] = { 0 };       /*     Compliant */
          int32_t mc2_0902_array_5 [ ARRAY_SIZE ] = { 0, 1, 2, 3, 4 }; /* Compliant */
          int32_t mc2_0902_array_6 [ ARRAY_SIZE ] = { 1 };       /* Not Compliant */

          mc2_0902_type_1 mc2_0902_5 = { 0 };                    /*     Compliant */
          mc2_0902_type_1 mc2_0902_6 = { 1 };                    /*     Compliant */

   struct mc2_0902_tag_1  mc2_0902_7 = { 0 };                    /*     Compliant */
   struct mc2_0902_tag_1  mc2_0902_8 = { 1 };                    /*     Compliant */

          mc2_0902_type_2 mc2_0902_17 = { 1, { 2 }, { 3 } };     /*     Compliant */
          mc2_0902_type_2 mc2_0902_18 = { 1,   2  , { 3 } };     /* Not Compliant */
          mc2_0902_type_2 mc2_0902_19 = { 1, { 2 },   3   };     /* Not Compliant */
          mc2_0902_type_2 mc2_0902_20 = { 1,   2  ,   3   };     /* Not Compliant */

   struct mc2_0902_tag_2  mc2_0902_21 = { 2, { 3 }, { 4 } };     /*     Compliant */
   struct mc2_0902_tag_2  mc2_0902_22 = { 2,   3  , { 4 } };     /* Not Compliant */
   struct mc2_0902_tag_2  mc2_0902_23 = { 2, { 3 },   4   };     /* Not Compliant */
   struct mc2_0902_tag_2  mc2_0902_24 = { 2,   3  ,   4   };     /* Not Compliant */

   use_int32 ( mc2_0902_array_1 [ 0 ] );
   use_int32 ( mc2_0902_array_2 [ 0 ] );
   use_int32 ( mc2_0902_array_3 [ 0 ] );
   use_int32 ( mc2_0902_array_4 [ 0 ] );
   use_int32 ( mc2_0902_array_5 [ 0 ] );
   use_int32 ( mc2_0902_array_6 [ 0 ] );
   use_int32 ( mc2_0902_1.mc2_0902_member_1 );
   use_int32 ( mc2_0902_2.mc2_0902_member_1 );
   use_int32 ( mc2_0902_3.mc2_0902_member_1 );
   use_int32 ( mc2_0902_4.mc2_0902_member_1 );
   use_int32 ( mc2_0902_5.mc2_0902_member_1 );
   use_int32 ( mc2_0902_6.mc2_0902_member_1 );
   use_int32 ( mc2_0902_7.mc2_0902_member_1 );
   use_int32 ( mc2_0902_8.mc2_0902_member_1 );
   use_int32 ( mc2_0902_9.mc2_0902_member_2                    );
   use_int32 ( mc2_0902_9.mc2_0902_member_3.mc2_0902_member_1  );
   use_int32 ( mc2_0902_9.mc2_0902_member_4.mc2_0902_member_1  );
   use_int32 ( mc2_0902_10.mc2_0902_member_2                   );
   use_int32 ( mc2_0902_10.mc2_0902_member_3.mc2_0902_member_1 );
   use_int32 ( mc2_0902_10.mc2_0902_member_4.mc2_0902_member_1 );
   use_int32 ( mc2_0902_11.mc2_0902_member_2                   );
   use_int32 ( mc2_0902_11.mc2_0902_member_3.mc2_0902_member_1 );
   use_int32 ( mc2_0902_11.mc2_0902_member_4.mc2_0902_member_1 );
   use_int32 ( mc2_0902_12.mc2_0902_member_2                   );
   use_int32 ( mc2_0902_12.mc2_0902_member_3.mc2_0902_member_1 );
   use_int32 ( mc2_0902_12.mc2_0902_member_4.mc2_0902_member_1 );
   use_int32 ( mc2_0902_13.mc2_0902_member_2                   );
   use_int32 ( mc2_0902_13.mc2_0902_member_3.mc2_0902_member_1 );
   use_int32 ( mc2_0902_13.mc2_0902_member_4.mc2_0902_member_1 );
   use_int32 ( mc2_0902_14.mc2_0902_member_2                   );
   use_int32 ( mc2_0902_14.mc2_0902_member_3.mc2_0902_member_1 );
   use_int32 ( mc2_0902_14.mc2_0902_member_4.mc2_0902_member_1 );
   use_int32 ( mc2_0902_15.mc2_0902_member_2                   );
   use_int32 ( mc2_0902_15.mc2_0902_member_3.mc2_0902_member_1 );
   use_int32 ( mc2_0902_15.mc2_0902_member_4.mc2_0902_member_1 );
   use_int32 ( mc2_0902_16.mc2_0902_member_2                   );
   use_int32 ( mc2_0902_16.mc2_0902_member_3.mc2_0902_member_1 );
   use_int32 ( mc2_0902_16.mc2_0902_member_4.mc2_0902_member_1 );
   use_int32 ( mc2_0902_17.mc2_0902_member_2                   );
   use_int32 ( mc2_0902_17.mc2_0902_member_3.mc2_0902_member_1 );
   use_int32 ( mc2_0902_17.mc2_0902_member_4.mc2_0902_member_1 );
   use_int32 ( mc2_0902_18.mc2_0902_member_2                   );
   use_int32 ( mc2_0902_18.mc2_0902_member_3.mc2_0902_member_1 );
   use_int32 ( mc2_0902_18.mc2_0902_member_4.mc2_0902_member_1 );
   use_int32 ( mc2_0902_19.mc2_0902_member_2                   );
   use_int32 ( mc2_0902_19.mc2_0902_member_3.mc2_0902_member_1 );
   use_int32 ( mc2_0902_19.mc2_0902_member_4.mc2_0902_member_1 );
   use_int32 ( mc2_0902_20.mc2_0902_member_2                   );
   use_int32 ( mc2_0902_20.mc2_0902_member_3.mc2_0902_member_1 );
   use_int32 ( mc2_0902_20.mc2_0902_member_4.mc2_0902_member_1 );
   use_int32 ( mc2_0902_21.mc2_0902_member_2                   );
   use_int32 ( mc2_0902_21.mc2_0902_member_3.mc2_0902_member_1 );
   use_int32 ( mc2_0902_21.mc2_0902_member_4.mc2_0902_member_1 );
   use_int32 ( mc2_0902_22.mc2_0902_member_2                   );
   use_int32 ( mc2_0902_22.mc2_0902_member_3.mc2_0902_member_1 );
   use_int32 ( mc2_0902_22.mc2_0902_member_4.mc2_0902_member_1 );
   use_int32 ( mc2_0902_23.mc2_0902_member_2                   );
   use_int32 ( mc2_0902_23.mc2_0902_member_3.mc2_0902_member_1 );
   use_int32 ( mc2_0902_23.mc2_0902_member_4.mc2_0902_member_1 );
   use_int32 ( mc2_0902_24.mc2_0902_member_2                   );
   use_int32 ( mc2_0902_24.mc2_0902_member_3.mc2_0902_member_1 );
   use_int32 ( mc2_0902_24.mc2_0902_member_4.mc2_0902_member_1 );
   mc2_0902_b ( );
}

static void mc2_0902_b ( void )
{
   use_int32 ( mc2_0902_array_1 [ 0 ] );
   use_int32 ( mc2_0902_array_2 [ 0 ] );
   use_int32 ( mc2_0902_array_3 [ 0 ] );
   use_int32 ( mc2_0902_1.mc2_0902_member_1 );
   use_int32 ( mc2_0902_2.mc2_0902_member_1 );
   use_int32 ( mc2_0902_3.mc2_0902_member_1 );
   use_int32 ( mc2_0902_4.mc2_0902_member_1 );
   use_int32 ( mc2_0902_9.mc2_0902_member_2                    );
   use_int32 ( mc2_0902_9.mc2_0902_member_3.mc2_0902_member_1  );
   use_int32 ( mc2_0902_9.mc2_0902_member_4.mc2_0902_member_1  );
   use_int32 ( mc2_0902_10.mc2_0902_member_2                   );
   use_int32 ( mc2_0902_10.mc2_0902_member_3.mc2_0902_member_1 );
   use_int32 ( mc2_0902_10.mc2_0902_member_4.mc2_0902_member_1 );
   use_int32 ( mc2_0902_11.mc2_0902_member_2                   );
   use_int32 ( mc2_0902_11.mc2_0902_member_3.mc2_0902_member_1 );
   use_int32 ( mc2_0902_11.mc2_0902_member_4.mc2_0902_member_1 );
   use_int32 ( mc2_0902_12.mc2_0902_member_2                   );
   use_int32 ( mc2_0902_12.mc2_0902_member_3.mc2_0902_member_1 );
   use_int32 ( mc2_0902_12.mc2_0902_member_4.mc2_0902_member_1 );
   use_int32 ( mc2_0902_13.mc2_0902_member_2                   );
   use_int32 ( mc2_0902_13.mc2_0902_member_3.mc2_0902_member_1 );
   use_int32 ( mc2_0902_13.mc2_0902_member_4.mc2_0902_member_1 );
   use_int32 ( mc2_0902_14.mc2_0902_member_2                   );
   use_int32 ( mc2_0902_14.mc2_0902_member_3.mc2_0902_member_1 );
   use_int32 ( mc2_0902_14.mc2_0902_member_4.mc2_0902_member_1 );
   use_int32 ( mc2_0902_15.mc2_0902_member_2                   );
   use_int32 ( mc2_0902_15.mc2_0902_member_3.mc2_0902_member_1 );
   use_int32 ( mc2_0902_15.mc2_0902_member_4.mc2_0902_member_1 );
   use_int32 ( mc2_0902_16.mc2_0902_member_2                   );
   use_int32 ( mc2_0902_16.mc2_0902_member_3.mc2_0902_member_1 );
   use_int32 ( mc2_0902_16.mc2_0902_member_4.mc2_0902_member_1 );
}
/* end of mc2_0902.c */
