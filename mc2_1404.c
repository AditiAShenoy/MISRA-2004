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
 * 14.4  The goto statement shall not be used.
 *
 */


#include "mc2_types.h"
#include "mc2_header.h"

void mc2_1404 ( void )
{
   goto lab2;       /* Not Compliant */
   lab1:
      goto lab3;    /* Not Compliant */
   lab2:
      goto lab1;    /* Not Compliant */
   lab3:
      return;
}

/* end of mc2_1404.c */
