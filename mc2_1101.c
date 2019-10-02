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
 * 11.1 Conversions shall not be performed between a pointer to a
 *      function and any type other than an integral type.
 *
 */

#include "mc2_types.h"
#include "mc2_header.h"

typedef int32_t ( *pif32 )( void );  /* Pointer to function returning int32_t */
typedef int16_t ( *pif16 )( void );  /* Pointer to function returning int16_t */

static void use_ptrt32if ( const pif32 use_ptrt32if_param );

void mc2_1101 ( void )
{
   pif32 int32p_fun = &get_int32;
   pif16 int16p_fun;
   float64_t float64_1101;
   int32_t *p_int32;


   float64_1101 = ( float64_t ) int32p_fun;  /* Not Compliant */
   int32p_fun = ( pif32 ) float64_1101;      /* Not Compliant */

   p_int32 = ( int32_t * ) int32p_fun;       /* Not Compliant - Also 11.2 */
   int32p_fun = ( pif32 ) p_int32;           /* Not Compliant - Also 11.2 */

   int16p_fun = ( pif16 ) int32p_fun;        /* Not Compliant */
   int32p_fun = ( pif32 ) int16p_fun;        /* Not Compliant */


   use_ptrt32if ( int32p_fun );
}


static void use_ptrt32if ( const pif32 use_ptrt32if_param )
{
   use_int32 ( use_ptrt32if_param ( ) );
}


/* end of mc2_1101.c */
