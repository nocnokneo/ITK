# =========================================================================
# 
#   Program:   Insight Segmentation & Registration Toolkit
#   Module:    BuildHeaderTest.tcl
#   Language:  Tcl
#   Date:      $Date$
#   Version:   $Revision$
# 
# 
#   Copyright (c) 2000 National Library of Medicine
#   All rights reserved.
# 
#   See COPYRIGHT.txt for copyright details.
# 
# =========================================================================*/

puts {/*=========================================================================

  Program:   Insight Segmentation & Registration Toolkit (ITK)
  Module:    BuildHeaderTest.tcl
  Language:  C++
  Date:      $$
  Version:   $$


Copyright (c) 2000 National Library of Medicine
All rights reserved.

See COPYRIGHT.txt for copyright details.

=========================================================================*/
#include <iostream>
// This file has been generated by BuildHeaderTest.tcl
// Test to include each header file for Insight
}

set Files [lsort [glob Code/Common/*.h]]
foreach File $Files \
{
  puts "#include \"[file tail $File]\""
}

puts "
int main ( int argc, char* argv[] )
{
  
  return 0;
}
"
