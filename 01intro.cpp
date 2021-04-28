/*
 * =====================================================================================
 *
 *       Filename:  intro.cpp
 *
 *    Description: considering types
 *
 *        Version:  1.0
 *        Created:  12/19/2020 10:04:54 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Sajed N. Zarrinpour (Minrya), sa.zarrinpour@iasbs.ac.ir,
 * samim56b@gmail.com Organization:
 *
 * =====================================================================================
 */

#include <iostream>
#include <string>
#include <array>

int main(int argc, char *argv[]) 
{

  /*
   * every definition in c++ is consists of three distict steps:
   * 
   * - declration: signature of the object
   * - definition: definition of the object
   * - initialization: granting memory and an initial value to an object
   * 
   * in simple definition of variables, declration and definitions are happening at the same time :
   * type variable_name;
   */
  std::string message = "hello world!";
  std::cout << message << std::endl;

  return 0;
}
