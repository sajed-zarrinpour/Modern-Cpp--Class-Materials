/*
 * =====================================================================================
 *
 *       Filename:  interface_implement.cpp
 *
 *    Description:  demonstrating the first step towards code encapsulation
 *
 *        Version:  1.0
 *        Created:  12/15/2020 01:50:44 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Sajed N. Zarrinpour (Minrya), sa.zarrinpour@iasbs.ac.ir,
 * samim56b@gmail.com Organization:
 *
 * =====================================================================================
 */
#include <iostream>

// Declration
int square(int x);

int main(int argc, char *argv[]) {
  // Initialization/call
  std::cout << square(5);
  std::cin.get();
  return 0;
}

// Definition
int square(int x) { return x * x; }
