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
 * 8.10 All declarations and definitions of objects or functions at file scope
 *      shall have internal linkage unless external linkage is required.
 */


#include "mc2_types.h"
#include "mc2_header.h"

int32_t implicit_extern = 8;       /* Not Compliant - doesn't need external
                                    * linkage */
int32_t imp_extern_local = 2;      /* Not Compliant - 8.10 8.7 doesn't need
                                      external or internal linkage */
void implicit_ext ( void );        /* Not Compliant - doesn't need external
                                    * linkage */
extern int32_t explicit_extern;    /* Not Compliant - doesn't need external
                                    * linkage */
extern int32_t exp_extern_local;   /* Not Compliant - 8.10 8.7 doesn't need
                                      external or internal linkage */
extern void explicit_ext ( void ); /* Not Compliant - doesn't need external
                                    * linkage */

int32_t explicit_extern = 10;
int32_t exp_extern_local = 4;

void implicit_ext ( void ) /* Use of variables */
{
   implicit_extern = imp_extern_local;
   explicit_extern = exp_extern_local;

   /* Usage */

   use_int32 ( implicit_extern );
   use_int32 ( explicit_extern );
}

void explicit_ext ( void )         /* Use of variables */
{
   implicit_extern = 1;
   explicit_extern = 1;

   use_int32 ( implicit_extern );
   use_int32 ( explicit_extern );
}

void mc2_0810 ( void )
{
   implicit_ext ( );
   explicit_ext ( );
}

/* end of mc2_0810.c */
