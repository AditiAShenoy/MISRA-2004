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
 * 11.3 A cast should not be performed between a pointer type and an
 *      integral type.
 */

#include "mc2_types.h"
#include "mc2_header.h"


void mc2_1103 ( void )
{
   int32_t int32_1103 = get_int32 ( );
   int32_t *point_int32;
   volatile int32_t *point_volatile_int32;
   void ( *point_voidf ) ( void );


   point_int32  = ( int32_t * ) int32_1103;                  /* Not Compliant */

   point_volatile_int32 = ( volatile int32_t * ) int32_1103; /* Not Compliant */

   point_voidf  = ( void ( * ) ( void ) ) int32_1103;        /* Not Compliant */

   int32_1103 = ( int32_t ) point_int32;                     /* Not Compliant */

   use_int32 ( int32_1103 );

   int32_1103 = ( int32_t ) point_volatile_int32;            /* Not Compliant */

   use_int32 ( int32_1103 );

   int32_1103 = ( int32_t ) point_voidf;                     /* Not Compliant */

   use_int32 ( int32_1103 );

}


/* end of mc2_1103.c */
