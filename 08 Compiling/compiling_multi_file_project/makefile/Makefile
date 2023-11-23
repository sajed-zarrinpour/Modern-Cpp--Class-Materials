# Setting constants
#  compiler:
CC = c++
#  compile flags:
CFLAGS = -Wall
#  executable name
OBJ = out

#-------------------------------------------------------------------------------------------------------------------------------
# first step: instruction for the compiling binaries, these instructions will execute upon make command.

# targets
# targets are actual objects to create. remember the first target must be the executable object which can be specified as follow
all:$(OBJ)

# next we create module objects, for example the following lines would create an object called sum.o
sum.o:sum.cpp
	$(CC) $(CFLAGS) -c sum.cpp


# after we compiled all modules, we compile the entry point to the object as well. this creates an object called main.o 
main.o:main.cpp
	$(CC) $(CFLAGS) -c main.cpp

# finally, we link all objects into one
$(OBJ):sum.o main.o
	$(CC) $(CFLAGS) sum.o main.o -o $(OBJ)

#-------------------------------------------------------------------------------------------------------------------------------
# second step: instruction needed for executing the program with make exec command
# execute binary from make commad 
exec:
	./$(OBJ)

#-------------------------------------------------------------------------------------------------------------------------------
# forth step: instruction for removing binaries.
# unistalling application
clean:
	rm -rf $(OBJ)
	rm -rf *.o
#-------------------------------------------------------------------------------------------------------------------------------
# please make note that the name of this file shall begin with capital m (Makefile)
# and you have to use tab, not 4 spaces. Ok??
