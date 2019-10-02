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
 * 5.6 No identifier in one name space should have the same spelling as an
 *     identifier in another name space, with the exception of structure and
 *     union member names.
 */

/*
 * Instances that would break Rules 5.3 to 5.5 are not tested for in this
 * file.
 * This file also contains violations of Rule 5.7
 */

/* There are four namespaces in the C Language
 * 1. Label names
 * 2. Tags of structure, unions and enumerations
 * 3. Members of structs and unions; each struct/union as a seperate namespace
 * 4. All other identifiers; e.g. enum constants, variables, functions, typedefs
 */

#include "mc2_types.h"
#include "mc2_header.h"

static void mc2_0506a ( void );
static void enum_struct (void );
static void struct_struct (void );
static void struct_variable (void );
static void enum_label (void );
static void struct_label (void );
static void variable_label (void );


static void enum_struct (void )
{
  /* enumeration constant vs structure member */

   struct ns_tag_enum
   {
      int32_t ns_te;
   }
   ns_tag_enum1;

   enum
   {
      ns_te,                     /* Not Compliant */
      ns_le,
      ns_ze
   }
   namespace_t_e;

   int32_t ns_le = get_int32();  /* Compliant with Rule 5.6, but breaks Rule 5.7
                                  * since variable in same namespace as enum
                                  * constant */
   ns_tag_enum1.ns_te = get_int32 ( );
   use_int32 ( ns_tag_enum1.ns_te );
   namespace_t_e = ns_te;
   use_int32(ns_le);
   /* use_enum ( namespace_t_e );  some tools may flag namespace_t_e as unused */
}


static void struct_struct (void )
{
  /* structure member vs structure member */

   struct ns_comp_comp1
   {
      int32_t ns_cc;
   }
   namespace_cc;

   struct ns_comp_comp2
   {
      int32_t ns_cc;      /* Compliant with Rule 5.6, but breaks Rule 5.7
                           * since mentioned as exception in rule */
      int32_t ns_cv;
   }
   namespace_c_c;

   namespace_cc.ns_cc = get_int32 ( );
   use_int32 ( namespace_cc.ns_cc );
   namespace_c_c.ns_cc = get_int32 ( );
   namespace_c_c.ns_cv = get_int32 ( );
   use_int32 ( namespace_c_c.ns_cc );
   use_int32 ( namespace_c_c.ns_cv );
}

static void struct_variable (void )
{
   /* structure member vs variable */

   struct ns_comp3
   {
      int32_t ns_c3a;
      int32_t ns_c3b;
   }
   namespace_c3;

   int32_t ns_c3a;             /* Not Compliant */

   namespace_c3.ns_c3a = get_int32 ( );
   namespace_c3.ns_c3b = get_int32 ( );
   use_int32 ( namespace_c3.ns_c3a );
   use_int32 ( namespace_c3.ns_c3b );

   ns_c3a = get_int32 ( );
   use_int32 ( ns_c3a );

}


static void enum_label (void )
{
  /* enumeration constant vs label */
  enum
   {
      ns_l1,
      ns_l2
   }
   namespace_t1;

ns_l1:                        /* Not Compliant */
   namespace_t1 = ns_l1;
   /* use_enum ( namespace_t1 );  some tools may flag namespace_t1 as unused */

}

static void struct_label (void )
{
  /* structure member vs label */
   struct ns_comp4
   {
      int32_t ns_c4a;
      int32_t ns_c4b;
   }
   namespace_c4;

  ns_c4a:                       /* Not Compliant */
   namespace_c4.ns_c4a = get_int32 ( );
   namespace_c4.ns_c4b = get_int32 ( );
   use_int32 ( namespace_c4.ns_c4a );
   use_int32 ( namespace_c4.ns_c4b );

}

static void variable_label (void )
{
   /* variable vs label */

   int32_t ns_vl;
   ns_vl = get_int32 ( );

  ns_vl:                        /* Not Compliant */
     use_int32 ( ns_vl );
}



static void mc2_0506a ( void ) /* Out of scope clashes */
{
   /* enumeration constant vs structure member */

   enum
   {
      ns_te,                 /* Not Compliant - clashes with previous structure
                              * member */
      ns_ze                  /* Compliant - only other use of ns_ze is in the
                              * same name space */
   }
   namespace_t_e;

   /* structure member vs variable */

   int32_t ns_cv;             /* Not Compliant */

   /* Usage */

   namespace_t_e = ns_te;
   /* use_enum ( namespace_t_e ); some tools may flag namespace_t_e as unused */
   namespace_t_e = ns_ze;
   /* use_enum ( namespace_t_e ); some tools may flag namespace_t_e as unused */
   ns_cv = get_int32 ( );
   use_int32 ( ns_cv );
}

void mc2_0506 ( void )
{
  enum_struct();

  struct_struct();

  struct_variable();

  enum_label();

  struct_label();

  variable_label();

  mc2_0506a();
}



/* end of mc2_0506.c */
