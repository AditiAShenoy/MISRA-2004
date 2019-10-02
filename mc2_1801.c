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
 * 18.1 All structure and union types shall be complete at the end of the
 *      translation unit.
 */

#include "mc2_types.h"
#include "mc2_header.h"

extern struct st *pst1;
extern struct st *pst2;

void mc2_1801 ( void )
{
   struct st1 s;       /* Not Compliant */

   struct {
      int8_t a;
      int8_t b [ ];    /* Not Compliant - constraint error 6.5.2.1 */
   } mc2_1801_st = { 1, { 2, 3, 4 } };

   mc2_1801_st.a = get_int8 ( );

   use_int8 ( mc2_1801_st.a );

   pst2 = pst1;         /* Compliant - See Technical Clarification
                         *             Use of opaque pointer */

   *pst2 = *pst1;       /* Not Compliant - 6.2.2.1 - undefined behaviour 16 */
}

/* end of mc2_1801.c */
