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
 *  20.11 The Library functions abort exit,getenv and system
 *        from <stdlib.h> shall not be used.
 */

#include "mc2_types.h"
#include "mc2_header.h"
#include <stdlib.h>

void mc2_2011 ( void )
{
  int32_t mc2_2011_status;
  char_t * mc2_2011_env;

  mc2_2011_env = getenv ( "path" ); /* Not Compliant -
                                     *    use of getenv() from stdlib.h */

  mc2_2011_status = system ( mc2_2011_env );
                                   /* Not Compliant -
                                    *    use of system() from stdlib.h */
  if ( mc2_2011_status == 0 )
  {
    abort ( );                     /* Not Compliant -
                                    *    use of abort() from stdlib.h */
  }

  if ( mc2_2011_status == 1 )
  {
    exit ( mc2_2011_status );      /* Not Compliant -
                                    *   use of exit() from stdlib.h */
  }

  use_char_ptr ( mc2_2011_env );

}
/* Note: This function has 3 points of exit - Rule 14.7 */

/* end of mc2_2011.c */
