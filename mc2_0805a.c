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
 * 8.5 There shall be no definitions of objects or functions in a header file.
 */

/*
 * A header file is defined as any file that is included via #include, as
 * opposed to any file with the .h suffix.
 */

#ifndef MC2_0805A_C
#define MC2_0805A_C

static int32_t n_def_header = 0;    /* Not Compliant */

static int32_t mc2_0805a ( void );

static int32_t mc2_0805a ( void )   /* Not Compliant */
{
   return 0;
}

#endif

/* end of mc2_0805a.c */

