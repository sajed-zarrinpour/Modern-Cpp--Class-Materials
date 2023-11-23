# the standard naming is Makefile with BIG m.
# 

# setting constant parameters 
# use them later with 
# $(<name of the constant>)

# c compiler
#CC = g++

# flags
#CFLAGS = -Wall

# output object name
#OBJ = out



# next is the target
# we must introduce our targets
# note that you have to use tab, not space and it is going to be fuzzy with vim
# configuration, keep an eye on it!


# first target: making the program
# $ make

#all:
#	<full command for compilation of your code>


# if the projects is make of some files, say func1.c up to funcn.c 
# and for whatever reason we want these mini functionalities to be compiled as
# distinct object files we can do
#func1.o: func1.c
#	$(CC) $(CFLAGS) func1.c

#funcn.o: funcn.c
#	$(CC) $(CFLAGS) funcn.c
# note that this way you have to compile main file seperatly as object too
#main.o: main.c
#	$(CC) $(CFLAGS) main.c
#
# the compiler would put these objects (.o files) into our final binaries when
# compiled, but if we are going to compile our libraries as shared libraries AKA
# dynamic links ( the librarie would load on runtime) we are going to add this
# line
#func1.so: func1.c func1.h
#	$(CC) $(CFLAGS) -fPIC -shared -o $@ func1.c -lc
# -fPIC : generate Position Independant Code
#
# all that remains is to add the binaries into the default all rule:
#BINS= func1 func1.so
#all: $(BINS)
# there is a bit more tricks into this, watch
# https://www.youtube.com/watch?v=JbHmin2Wtmc 
# for more details
# then the all target would change as follow
#all: $(OBJ)
#$(OBJ): func1.o funcn.o main.o
#	$(CC) $(CFLAGS) func1.o funcn.o main.o -o $(OBJ)
# 
# if you dont  use shared libraries, make sure to supress the linker output with
# appropriate flag in CFLAGS constant (elements will seperate by space as usual (-c flag in
# clang for example).


# second target, instructions for executing the result
# $ make exec

#exec:
#	./<executable output name>


# third target: cleaning the compiled file(s)
#  $ make clean

#clean:
#	rm -rf <executable name>
