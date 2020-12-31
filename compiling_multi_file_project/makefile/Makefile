# Setting constants
CC = c++
CFLAGS = -Wall
OBJ = out

#targets
all:$(OBJ)

sum.o:sum.cpp
	$(CC) $(CFLAGS) -c sum.cpp

main.o:main.cpp
	$(CC) $(CFLAGS) -c main.cpp

$(OBJ):sum.o main.o
	$(CC) $(CFLAGS) sum.o main.o -o $(OBJ)

# execute binary frm make commad 
exec:
	./$(OBJ)

# unistalling application
clean:
	rm -rf $(OBJ)
	rm -rf *.o
