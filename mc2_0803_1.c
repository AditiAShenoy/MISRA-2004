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
 * 8.3 For each function parameter the type given in the declaration and
 *     definition shall be identical, and the return types shall also be
 *     identical.
 */

#include "mc2_types.h"
#include "mc2_header.h"
#include "mc2_0803.h"

static my_s32bit_int mc2_0803b ( void );
static void mc2_0803c ( my_s32bit_int type_param );
static void mc2_0803d ( const int32_t qualifier_param );

static my_other_s32bit_int mc2_0803b ( void )            /* Not Compliant */
{
   my_s32bit_int return_s32bit_int = get_int32 ( );

   return return_s32bit_int;
}

static void mc2_0803c ( my_other_s32bit_int type_param ) /* Not Compliant */
{
   use_int32 ( type_param );
}

static void mc2_0803d ( int32_t qualifier_param )        /* Not Compliant */
{
   use_int32 ( qualifier_param );
}

void mc2_0803 ( void )
{
   my_other_s32bit_int my_other_s32_bit;
   int32_t non_const_int = get_int32 ( );

   /* Usage */

   my_other_s32_bit = mc2_0803b ( );
   mc2_0803c ( my_other_s32_bit );
   mc2_0803d ( non_const_int );
   use_int32 ( my_other_s32_bit );

   /* Calling functions with external linkage */

   mc2_0803_2 ( my_other_s32_bit );
}

/* end of mc2_0803_1.c */
