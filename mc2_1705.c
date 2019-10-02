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
 * 17.5 The declaration of objects should contain no more than 2 levels of
 *      pointer indirection.
 */


#include "mc2_types.h"
#include "mc2_header.h"


typedef int8_t * INTPTR;

static void mc2_1705_1
   ( int8_t *   par1,
     int8_t **  par2,
     int8_t *** par3,               /* Not Compliant */
     INTPTR *   par4,
     INTPTR *   const * const par5, /* Not Compliant */
     int8_t *   par6 [ ],
     int8_t **  par7 [ ]            /* Not Compliant */
   );
static int8_t ** mc2_1705_local1 ( void );
static int8_t *** mc2_1705_local2 ( void ); /* Not Compliant */



static void mc2_1705_1
   ( int8_t *   par1,
     int8_t **  par2,
     int8_t *** par3,               /* Not Compliant */
     INTPTR *   par4,
     INTPTR *   const * const par5, /* Not Compliant */
     int8_t *   par6 [ ],
     int8_t **  par7 [ ]            /* Not Compliant */
   )
{
   *par2 = par1;
   *par3 = par2;
   *par4 = par1;
   use_int8_ptr ( ** par5 );
   par6 [ 0 ] = *par4;
   par7 [ 0 ] = *par3;
   use_int8_ptr ( par6 [ 0 ] );
   use_int8_ptr ( * par7 [ 0 ] );
}


static int8_t ** mc2_1705_local1 ( void )
{
   static int8_t * local_ptr_1;

   local_ptr_1= get_int8_ptr ( );
   return & local_ptr_1;
}

static int8_t *** mc2_1705_local2 ( void ) /* Not Compliant */
{
   static int8_t ** local_ptr_2;

   local_ptr_2 = mc2_1705_local1 ( );
   return & local_ptr_2;
}


void mc2_1705 ( void )
{
   struct struct_with_ptrs
   {
      int8_t *   s_ptr;        /* Compliant     */
      int8_t **  s_ptrptr;     /* Compliant     */
      int8_t *** s_ptrptrptr;  /* Not Compliant */
   };

   struct struct_with_ptrs     ps0;  /* Compliant     */
   struct struct_with_ptrs *   ps1;  /* Compliant     */
   struct struct_with_ptrs **  ps2;  /* Compliant     */
   struct struct_with_ptrs *** ps3;  /* Not Compliant */

   int8_t *   local_ptr1;                           /* Compliant     */
   int8_t **  local_ptr2;                           /* Compliant     */
   int8_t *** local_ptr3;                           /* Not Compliant */
   INTPTR *   local_ptr4;                           /* Compliant     */
   INTPTR * const * const local_ptr5 = &local_ptr4; /* Not Compliant */
   int8_t *   local_ptr6 [ 10 ];                    /* Compliant     */
   int8_t **  local_ptr7 [ 10 ];                    /* Compliant     */

   int8_t **  ( * pfunc1   ) ( void );  /* Compliant     */
   int8_t **  ( ** pfunc2  ) ( void );  /* Compliant     */
   int8_t **  ( *** pfunc3 ) ( void );  /* Not Compliant */
   int8_t *** ( * pfunc4   ) ( void );  /* Not Compliant */
   int8_t *** ( ** pfunc5  ) ( void );  /* Not Compliant */


   pfunc1 = & mc2_1705_local1;
   pfunc2 = & pfunc1;
   pfunc3 = & pfunc2;
   pfunc4 = & mc2_1705_local2;
   pfunc5 = & pfunc4;

   local_ptr1 = get_int8_ptr ( );

   local_ptr2 = pfunc1 ( );
   use_int8_ptr ( * local_ptr2 );

   local_ptr3 = pfunc4 ( );
   use_int8_ptr ( ** local_ptr3 );

   local_ptr4 = ( * pfunc2 ) ( );
   local_ptr6 [ 0 ] = get_int8_ptr ( );
   local_ptr7 [ 0 ] = &local_ptr1;

   local_ptr2 = ( ** pfunc3 ) ( );
   local_ptr3 = ( * pfunc5 ) ( );

   mc2_1705_1 ( local_ptr1, local_ptr2, local_ptr3, local_ptr4, local_ptr5,
                local_ptr6, local_ptr7 );

   ps0.s_ptr       = local_ptr1;
   ps0.s_ptrptr    = local_ptr2;
   ps0.s_ptrptrptr = local_ptr3;
   ps1 = & ps0;
   ps2 = & ps1;
   ps3 = & ps2;
   use_int8_ptr ( ( ***ps3 ).s_ptr );
   use_int8_ptr ( * ( ps0.s_ptrptr ) );
   use_int8_ptr ( ** ( ps0.s_ptrptrptr ) );


}


/* end of mc2_1705.c */

