MISRA-C:2004 Exemplar Suite

Release Version:   1.0
Release Date: 17 JULY 2007

Published by 
MIRA Limited, Watling Street, Nuneaton, Warwickshire CV10 0TU UK
www.misra-c.com

Copyright MIRA Limited, 2006, 2007

Purpose
=======
This suite of files is intended to illustrate issues addressed by the MISRA-C rules as expressed in:

   1/ MISRA-C:2004 Guidelines for the use of the C language in critical systems,
      ISBN 0 9524156 2 3 paperback and ISBN 0 9524156 4 X PDF.
   2/ MISRA-C:2004 Technical Corrigendum 1

This exemplar suite is not exhaustive, but provides examples of key issues.

Implementation
==============
One (or more) files exist for each rule within the suite. Where no examples are appropriate, the file will state that no example is provided for that rule. 

The file "mc2_xxyy.c" illustrates MISRA-C:2004, rule xx.yy. For example, mc2_0201.c illustrates Rule 2.1.

All files use DOS End Of Line (EOL) and End Of File (EOF) format.

Version Control
===============
Each version of the exemplar suite is released in a single ZIP file. An MD5 checksum is provided for each Released ZIP file. Each file within a release will contain a record of the Last Modified Date for that file. To ensure that you have a valid copy of the latest release, please download from the MISRA website.

Limitations 
===========
The examples have been written assuming 32-bit integer word size, i.e. char is 8-bit, short is 16-bit, int is 32-bit and long is 64-bit. If this is used on a 16-bit integer machine, additional issues may be reported.

Results
=======
Files contain a number of C language statements. These are: 
a) support statements,
b) "Compliant" examples,
c) "Not Compliant" examples.
 
A "Compliant" example is a construct that should not generate a warning message.
A "Not Compliant" example is a construct that should generate a warning message. The exact location of this warning is permitted to be tool dependent.
Note: it is not always possible to avoid cross-talk between rules, so some files will violate multiple rules. Tools may generate additional messages.

Feedback
========
Feedback may be provided via the MISRA-C Forum.

Legal Disclaimer
================
Adherence to the requirements of MISRA-C does not in itself ensure error-free robust software or guarantee portability and re-use.
Compliance with the requirements of MISRA-C, or any subsequently published modification, does not of itself confer immunity from legal obligations.

No warranty or implied warranty is provided with this exemplar suite.
The exemplar suite may not be error free and it is not guaranteed that the use of the exemplar suite is fit for purpose.

License
=======
The MISRA-C:2004 Exemplar Suite consists of all files released in this compressed directory.

A license is granted for single-user personal use on a single computer only.

No permission is given for the distribution of these files, or any derivatives outside of your organisation. This includes but is not exclusively limited to making the copy available to others by email, placing it on a server for access by internet, printing and distributing hardcopies, or distribution with a tool. No public claims of any kind can be made under this licence. Any such use or claim constitutes an infringement of copyright and license.

Please contact MISRA for further details, including alternative licensing schemes.

Release History
===============
Release 1.0 : 17 JULY 2007 First release

