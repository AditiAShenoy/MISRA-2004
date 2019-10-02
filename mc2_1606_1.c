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
 * 16.6 The number of arguments passed to a function shall match the
 * number of parameters.
 */

#include "mc2_types.h"
#include "mc2_header.h"

/* Function mc2_1606a is defined having a uint16_t parameter in mc2_1606_2.c */
extern int16_t mc2_1606a ( void );
/* Function mc2_1606b is defined having no parameters in mc2_1606_2.c */
extern int16_t mc2_1606b ( int16_t param_1606b );
/* Function mc2_1606c does not have a prototype */

void mc2_1606 ( void )
{
   int16_t fun_ret_1606;
   int16_t fun_param_1606 = get_int16 ( );

   fun_ret_1606 = mc2_1606a ( );                  /* Not Compliant */
   fun_ret_1606 += mc2_1606b ( fun_param_1606 );  /* Not Compliant */
   fun_ret_1606 += mc2_1606c ( fun_param_1606 );  /* Not Compliant */
                                                  /* Also Rule 8.1 */
   fun_ret_1606 += mc2_1606c ( fun_param_1606,
                               fun_param_1606,
                               fun_param_1606 );  /* Not Compliant */
                                                  /* Also Rule 8.1 */

   use_int16 ( fun_ret_1606 );
}

/* Following violates Rules 5.5, 5.7 and 8.1 */
static int16_t mc2_1606c ( int16_t param_1606c_1, int16_t param_1606c_2 )
{
   return param_1606c_1 + param_1606c_2;
}


/* end of mc2_1606_1.c */
