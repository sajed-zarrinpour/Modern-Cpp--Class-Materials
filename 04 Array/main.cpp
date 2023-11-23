/*
 * =====================================================================================
 *
 *       Filename:  arrays.cpp
 *
 *    Description: considering arrays
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
#include <array>

int main(int argc, char *argv[]) 
{
  // decleration, definition and initialization of the array, all in one place
  // note that we have to specify a fixed length
  std::array<int, 3> arr = {3, 4, 5};
  //walking over the array
  for (int i = 0; i < arr.size(); ++i) 
  {
    std::cout << arr[i] << std::endl;
  }

  return 0;
}
