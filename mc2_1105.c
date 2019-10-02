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
 * 11.5 A cast shall not be performed that removes any const or
 *      volatile qualification from the type addressed by a pointer.
 */

#include "mc2_types.h"
#include "mc2_header.h"

static void use_uint16_ptr_ptr ( uint16_t * const * const use_uint16_ptr_ptr_param );

void mc2_1105( void )
{
   uint16_t * pi;                                         /* pointer to int16_t */
   uint16_t * * ppi;                                      /* pointer to pointer */
   const uint16_t      cuint16_1105 = get_uint16 ( );     /* const int16_t */
   volatile uint16_t   vuint16_1105 = get_uint16 ( );     /* volatile int16_t */
   uint16_t * const    cpi          = get_uint16_ptr ( ); /* const pointer to int16_t */
   const uint16_t *    pci          = &cuint16_1105;      /* pointer to const */
   const uint16_t * *  ppci         = &pci;               /* pointer to pointer to const */
   uint16_t * const *  pcpi         = &cpi;               /* pointer to const pointer */
   volatile uint16_t * pvi          = &vuint16_1105;      /* pointer to volatile */


   pi = cpi;                              /* Compliant - no conversion
                                             no cast required */
   use_uint16_ptr ( pi );
   pi  = ( uint16_t * )pci;               /* Not Compliant */
   use_uint16_ptr ( pi );
   pi  = ( uint16_t * )pvi;               /* Not Compliant */
   ppi = ( uint16_t * * )pcpi;            /* Not Compliant */
   use_uint16_ptr_ptr ( ppi );
   ppi = ( uint16_t * * )ppci;            /* Not Compliant */


   use_uint16 ( cuint16_1105 );
   use_uint16 ( vuint16_1105 );
   use_uint16_ptr ( pi );
   use_uint16_ptr_ptr ( ppi );
}

static void use_uint16_ptr_ptr ( uint16_t * const * const use_uint16_ptr_ptr_param )
{
   use_uint16_ptr ( *use_uint16_ptr_ptr_param );
}

/* end of mc2_1105.c */
