/*
 * =====================================================================================
 *
 *       Filename:  vectors.cpp
 *
 *    Description: some usefull functions for vectors
 *
 *        Version:  1.0
 *        Created:  12/23/2020 04:56:26 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Sajed N. Zarrinpour (Minrya), sa.zarrinpour@iasbs.ac.ir,
 * samim56b@gmail.com Organization:
 *
 * =====================================================================================
 */

//for accesing vector data type
#include <vector>
#include <algorithm>
#include <functional>
#include <numeric>

int main(int argc, char *argv[]) {
  // declaration, definition and initialization in one line :
  std::vector<float> v = {3.2, 6.8};
  /*
   * vectors are arrays with variable length. it is only natural that 
   * c++ want them to be in a sequence of bites in memory. to demonstrate the idea,
   * suppose that this is the physical ram with just 8 empty byte.  
   * { , , , , , , , }
   * suppose that I place this vector on it v = <v_1, v_2>
   * {v_1, v_2, , , , , , }
   * suppose that I declare a new variable, for instance a float f it would be placed after that vector
   * {v_1, v_2, f, , , , , , }
   * now what if we want to add another element to that vector like v_3?
   * to prevent something like this : {v_1, v_2, f, v_3, , , , , }
   * we have to copy and move the existing vector in a bulk motion. 
   * {v_1, v_2, f, , , , , , } -moving-> { , , f, v_1, v_2, , , , } -adding-> { , , f, v_1, v_2, v_3, , , }
   * it is OK for small size vectors, but as the vector grows in size, this operation seems to be inefficient.
   * to reduce number of this moving operations in memory, we can reserve a number of elements beforehand.
   * the vector strill goes through the moving operation if it exceeds the reserved size but it reduces
   * number of these operation drasticaly.
   * { v_1, v_2, , f, , , , , } -add-> { v_1, v_2, v_3, f, , , , , }
   * take a geuss about your vector size, and reserve it's size.
   * dont do this on small vectors
   * dont overstimate reserved size
  */
  v.reserve(5);
  /*
   * adding new elements to the vector
   * it is equivallent to push back (older version)
   * but, try to get used to using the newer version (emplace_back)
   */
  v.emplace_back(10.0f);
  v.emplace_back(5.3f);
  v.push_back(9.9);
  /*
   * different ways to walk over an array ,
   * they look the same, however the second way is actully faster
   */
  for (auto i : v) {
    std::cout << i << std::endl;
  }
  for (const auto &el : v) {
    std::cout << el << std::endl;
  }

  // algorithms
  // sortin the vector from point a to point b, in this case, everything
  std::sort(v.begin(), v.end());
  /*
   * accumulate does this pseudo code on the selected group of data:
   * tmp = identical_member_of_the_group_with_respect_to_operation_@
   * for el in group
   *     tmp @= el
   * return tmp
   * 
   * so basically we do:
   * accumulate ({group}, identical_el, operation)
   */
  float sum = std::accumulate(v.begin(), v.end(), 0.0f);
  float product = std::accumulate(v.begin(), v.end(), 1.0f, std::multiplies<float>());
  /*
   * removing the array and free up memory,
   * though any variable will be cleansed after leaving the scope,
   * it is important to free up memory as soon as you ended your work
   * specially if your vector is too larg or you are working with too many of them
   */
  v.clear();


  return 0;
}
