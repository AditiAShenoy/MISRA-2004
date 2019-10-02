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
 * 16.1 Functions shall not be defined with a variable number of arguments.
 */

#include "mc2_types.h"
#include "mc2_header.h"

static void mc2_1601a ( uint16_t variable_arg1, ... );

void mc2_1601 ( void )
{
   uint16_t var_argument = get_uint16 ( );

   mc2_1601a ( var_argument , var_argument );
}

/* Function defined with variable number of arguments */
static void mc2_1601a ( uint16_t variable_arg1, ... )      /* Not Compliant */
{
   use_uint16 ( variable_arg1 );
}

/* end of mc2_1601.c */

