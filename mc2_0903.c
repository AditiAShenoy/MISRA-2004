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
 * 9.3 In an enumerator list, the "=" construct shall not be used to
 *     explicitly initialise members other than the first, unless all
 *     items are explicitly initialised.
 */

#include "mc2_types.h"
#include "mc2_header.h"

typedef enum
{
   mc2_0903_red_1    = 3,
   mc2_0903_blue_1,
   mc2_0903_green_1,
   mc2_0903_yellow_1 = 5      /* Not Compliant */
} mc2_0903_colour_1;

typedef enum
{
   mc2_0903_red_2    = 3,
   mc2_0903_blue_2   = 4,
   mc2_0903_green_2  = 5,
   mc2_0903_yellow_2 = 5      /* Compliant */
} mc2_0903_colour_2;

extern mc2_0903_colour_1 mc2_0903_get_colour_1 ( void );
extern void mc2_0903_use_colour_1 ( mc2_0903_colour_1 mc2_0903_colour_1_param );
extern mc2_0903_colour_2 mc2_0903_get_colour_2 ( void );
extern void mc2_0903_use_colour_2 ( mc2_0903_colour_2 mc2_0903_colour_2_param );

void mc2_0903 ( void )
{
   mc2_0903_use_colour_1 ( mc2_0903_get_colour_1 ( ) );
   mc2_0903_use_colour_2 ( mc2_0903_get_colour_2 ( ) );
}

/* end of mc2_0903.c */
