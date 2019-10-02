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
 * 12.9   The unary minus operator shall not be applied to an expression
 *        whose underlying type is unsigned.
 *
 */

/*
 * This file also contains violations of Rule 10.1
 */

#include "mc2_types.h"
#include "mc2_header.h"

void mc2_1209 ( void )
{
   uint8_t  mc2_1209_u8a;
   uint8_t  mc2_1209_u8b;
   int8_t   mc2_1209_8a;
   uint16_t mc2_1209_u16a;
   int16_t  mc2_1209_16a;
   uint32_t mc2_1209_u32a;
   int32_t  mc2_1209_32a;
   uint64_t mc2_1209_u64a;
   int64_t  mc2_1209_64a;

   mc2_1209_u8a  = get_uint8 ( );
   mc2_1209_u8b  = get_uint8 ( );
   mc2_1209_u16a = get_uint16 ( );
   mc2_1209_u32a = get_uint32 ( );
   mc2_1209_u64a = get_uint64 ( );

   mc2_1209_u8a = -mc2_1209_u8a;                    /* Not compliant */
   mc2_1209_8a = -mc2_1209_u8a;                     /* Not compliant */
   mc2_1209_u8a = -( mc2_1209_u8a + mc2_1209_u8b ); /* Not compliant */
   mc2_1209_8a = -mc2_1209_8a;                      /* Compliant */
   use_int8 ( mc2_1209_8a );

   mc2_1209_8a = - (int8_t) ( mc2_1209_u8a );      /* Compliant */
   use_int8 ( mc2_1209_8a );

   mc2_1209_u8a = mc2_1209_u8a - mc2_1209_u8b;        /* Compliant */
   mc2_1209_u8a = - ( mc2_1209_u8a - mc2_1209_u8b );  /* Not compliant */

   mc2_1209_16a = -mc2_1209_u16a;   /* Not compliant */
   mc2_1209_16a = -mc2_1209_16a;    /* Compliant */
   use_int16 ( mc2_1209_16a );

   mc2_1209_16a = - (int16_t) ( mc2_1209_u8a );

   mc2_1209_32a = -mc2_1209_u32a;   /* Not compliant */
   mc2_1209_32a = -mc2_1209_32a;    /* Compliant */
   use_int32 ( mc2_1209_32a );

   mc2_1209_64a = -mc2_1209_u64a;   /* Not compliant */
   mc2_1209_64a = -mc2_1209_64a;    /* Compliant */
   use_int64 ( mc2_1209_64a );

   mc2_1209_16a = -mc2_1209_u8a;    /* Not compliant */
   use_int16 ( mc2_1209_16a );

   mc2_1209_32a = -mc2_1209_u8a;    /* Not compliant */
   use_int32 ( mc2_1209_32a );

   mc2_1209_64a = -mc2_1209_u8a;    /* Not compliant */
   use_int64 ( mc2_1209_64a );

   mc2_1209_32a = -mc2_1209_u16a;   /* Not compliant */
   use_int32 ( mc2_1209_32a );

   mc2_1209_64a = -mc2_1209_u16a;   /* Not compliant */
   use_int64 ( mc2_1209_64a );

   mc2_1209_64a = -mc2_1209_u32a;   /* Not compliant */
   use_int64 ( mc2_1209_64a );

}

/* end of mc2_1209.c */

