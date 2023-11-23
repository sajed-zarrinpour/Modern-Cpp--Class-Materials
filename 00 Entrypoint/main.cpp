/*
 * =====================================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description: main structure of compiling and debugging
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


#define EXIT_SUCCESS 0
#define EXIT_FAILURE 1

int main(int argc, char *argv[]) {

/*
 * this is the bare bone of a c++ program, it needs nothing more than a main function.
 * this function is the gate between our application and the operating system,
 * hence it is called the "entry point"
 * 
 * about the inputs of this function, they are set by OS when calling application, say from a terminal.
 * argc is the number of arguement passed (argument count)
 * argv is the actual values passed to the application (argument values)
 * the first argument is always the name of the application. for that, we usually start walking over it from index 1,
 * ignoring the first entry. and argument are seperated by space.
 * say the name of the application to be app, then call it can be done like this:
 * $ app arg1 arg2
 */
 for (int i=1; i<argc; ++i)
 {
   argv[i];
 }

/*
 * the integer that this function returns is a code indicating the state which the program has ended for OS.
 * 0 or EXIT_SUCCESS
 * 1 or EXIT_FAILURE (any other non zero value is considered as failure too)
 */
 if (argv[1]=="fail")
 {
   return EXIT_FAILURE;
 }
 return EXIT_SUCCESS;
}
