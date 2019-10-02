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
 * 12.2   The value of an expression shall be the same under any order of
 *        evaluation that the standard permits.
 *
 *        NB. This code might not compile because the code modifies variables
 *            without an intervening sequence point.
 */

#include "mc2_types.h"
#include "mc2_header.h"

typedef struct struct_fn_t
{
  void (* s_fn)( struct struct_fn_t * s_fn_ptr );
} struct_fn;

typedef struct_fn* struct_fn_ptr;


static uint16_t mc2_1202_global;

static uint16_t mc2_1202_f ( uint16_t x );
static uint16_t mc2_1202_g ( uint16_t x );
static uint16_t mc2_1202_func ( uint16_t x, uint16_t y );
static uint16_t mc2_1202_fptr ( uint16_t *x );
static uint16_t mc2_1202_gptr ( uint16_t *x );
static struct_fn_ptr mc2_1202_hn ( struct_fn **hn_ptr );


static uint16_t mc2_1202_f ( uint16_t x )
{
   mc2_1202_global = 1u;
   return x;
}

static uint16_t mc2_1202_g ( uint16_t x )
{
   mc2_1202_global = 2u;
   return x;
}

static uint16_t mc2_1202_func ( uint16_t x, uint16_t y )
{
   return x + y;
}

static uint16_t mc2_1202_fptr ( uint16_t *x )
{
  *x = *x + 1u;
   return *x;
}

static uint16_t mc2_1202_gptr ( uint16_t *x )
{
  *x = *x + 2u;
   return *x;
}

static struct_fn_ptr mc2_1202_hn ( struct_fn **hn_ptr )
{
   (*hn_ptr)++; /* pointer arithmetic - not compliant with 17.4 */
   return (*hn_ptr);
}

void mc2_1202 ( void )
{

   uint16_t mc2_1202_a;
   uint16_t mc2_1202_b[10];
   uint16_t mc2_1202_i;
   uint16_t mc2_1202_x;
   uint16_t mc2_1202_y;
   uint16_t mc2_1202_z;
   volatile uint16_t mc2_1202_v;
   struct_fn s_fn_ptrs[10];
   struct_fn * mc2_1202_p = &s_fn_ptrs[0];


   mc2_1202_a = get_uint16 ( );
   mc2_1202_b[0] = get_uint16 ( );
   mc2_1202_i = get_uint16 ( );
   mc2_1202_x = get_uint16 ( );
   mc2_1202_v = get_uint16 ( );
   mc2_1202_z = get_uint16 ( );

   /* Following line is not compliant */
   mc2_1202_x = mc2_1202_b[mc2_1202_i] + mc2_1202_i++; /* Not compliant   */
                                                       /* Also Rule 12.13 */
   use_uint16 ( mc2_1202_x );

   /* Following 2 lines are compliant alternative */
   mc2_1202_x = mc2_1202_b[mc2_1202_i] + mc2_1202_i;
   mc2_1202_i++;

   use_uint16 ( mc2_1202_x );
   /* ----- */

   mc2_1202_x = mc2_1202_func( mc2_1202_i++, mc2_1202_i ); /* Not compliant */
                                                           /* Also Rule 12.13 */
                       /* Order of parameter evaluation matters */
   use_uint16 ( mc2_1202_i );
   use_uint16 ( mc2_1202_x );

   mc2_1202_p->s_fn ( mc2_1202_p++ );    /* Not compliant */
                                         /* Also Rule 12.13 */
                       /* evaluation order of p matters */
   mc2_1202_p->s_fn ( mc2_1202_hn ( &mc2_1202_p ) ); /* Not compliant */
                       /* _hn changes the pointer _p */
                       /* also breaks pointer arithmetic 17.4 */

   /* ----- */

   mc2_1202_x = mc2_1202_f ( mc2_1202_a ) + mc2_1202_g ( mc2_1202_a );  /* Not compliant */
                       /* Problem if _f and _g alter the same global data */
   use_uint16 ( mc2_1202_x );

   /* Following two lines are compliant alternative */
   mc2_1202_x = mc2_1202_f ( mc2_1202_a );
   mc2_1202_x += mc2_1202_g ( mc2_1202_a );

   use_uint16 ( mc2_1202_x );
   /* ----- */

   mc2_1202_x = mc2_1202_fptr ( &mc2_1202_a )
              + mc2_1202_gptr ( &mc2_1202_a ); /* Not compliant */
                       /* Problem if either _fptr or _gptr change _a */
   use_uint16 ( mc2_1202_x );

   mc2_1202_x = mc2_1202_y = mc2_1202_y = mc2_1202_z ; /* Not compliant */
   use_uint16 ( mc2_1202_x );

   mc2_1202_x = mc2_1202_y = mc2_1202_y++;             /* Not compliant */
                                                       /* Also Rule 12.13 */
   use_uint16 ( mc2_1202_x );

   mc2_1202_x = mc2_1202_v; /* The best way to access volatiles i.e. do not */
                            /* use v within expressions */
   use_uint16 ( mc2_1202_x );

   mc2_1202_i = ( mc2_1202_v * 256u ) + mc2_1202_v;    /* Not compliant */
                       /* non-simple use of volatile _v, order dependent */

   use_uint16 ( mc2_1202_i );
   use_uint16 ( mc2_1202_global );
}
/* end of mc2_1202.c */
