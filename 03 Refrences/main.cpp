/*
 * =====================================================================================
 *
 *       Filename:  refrences.cpp
 *
 *    Description: refrences showcase
 *
 *        Version:  1.0
 *        Created:  12/20/2020 03:40:43 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Sajed N. Zarrinpour (Minrya), sa.zarrinpour@iasbs.ac.ir,
 * samim56b@gmail.com Organization:
 *
 * =====================================================================================
 */

#include <iostream>
int main(int argc, char *argv[]) 
{
  /*
   * what we are going to see here is like entaglement.
   * we bind to variable to one common place in memory.
   * consider the original variable as master and the refrence to it as slave
   * so if one changes, the other.
   */
  int master;
  int &ref_2_master = master;
  master = 1;
  std::cout <<"master: "<< master << " slave: " << ref_2_master << std::endl;
  ref_2_master = 2;
  std::cout <<"master: "<< master << " slave: " << ref_2_master << std::endl;
  /* 
   * Though for must usages, we want this binding to be a one way binding.
   * In other world, master can change the slave, but slave cannot change itself or master
   */
  const int &const_ref_2_master = master;

  return 0;
}
