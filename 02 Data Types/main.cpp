/*
 * =====================================================================================
 *
 *       Filename:  data_types.cpp
 *
 *    Description:  data types and their limits,
 *    References:
 *                  https://www.cplusplus.com/reference/climits/
 *                  https://www.cplusplus.com/reference/cctype/
 *                  https://www.cplusplus.com/reference/cwchar/
 *                  https://www.cplusplus.com/reference/cwctype/
 *
 *
 *
 *        Version:  1.0
 *        Created:  12/15/2020 07:59:03 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Sajed N. Zarrinpour (Minrya), sa.zarrinpour@iasbs.ac.ir,
 * samim56b@gmail.com Organization:
 *
 * =====================================================================================
 */

#include <climits>
#include <iostream>
using namespace std;
int main(int argc, char *argv[]) {
  std::cout << "The min value of CHAR_BIT is:" << CHAR_BIT << std::endl;
  std::cout << "The min value of SCHAR_MIN is:" << SCHAR_MIN << std::endl;
  std::cout << "The max value of SCHAR_MAX is:" << SCHAR_MAX << std::endl;

  std::cout << "The max value of UCHAR_MAX is:" << UCHAR_MAX << std::endl;

  std::cout << "The min value of CHAR_MIN is:" << CHAR_MIN << std::endl;
  std::cout << "The max value of CHAR_MAX is:" << CHAR_MAX << std::endl;

  std::cout << "The max value of MB_LEN_MAX is:" << MB_LEN_MAX << std::endl;

  std::cout << "The min value of SHRT_MIN is:" << SHRT_MIN << std::endl;
  std::cout << "The max value of SHRT_MAX is:" << SHRT_MAX << std::endl;

  std::cout << "The max value of USHRT_MAX is:" << USHRT_MAX << std::endl;

  std::cout << "The min value of INT_MIN is:" << INT_MIN << std::endl;
  std::cout << "The max value of INT_MAX is:" << INT_MAX << std::endl;

  std::cout << "The max value of UINT_MAX is:" << UINT_MAX << std::endl;

  std::cout << "The min value of LONG_MIN is:" << LONG_MIN << std::endl;
  std::cout << "The max value of LONG_MAX is:" << LONG_MAX << std::endl;

  std::cout << "The max value of ULONG_MAX is:" << ULONG_MAX << std::endl;

  std::cout << "The min value of LLONG_MIN is:" << LLONG_MIN << std::endl;
  std::cout << "The max value of LLONG_MAX is:" << LLONG_MAX << std::endl;

  std::cout << "The max value of ULLONG_MAX is:" << ULLONG_MAX << std::endl;

  return 0;
}
