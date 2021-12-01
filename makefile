CC = gcc
FLAGS = -Wall -g

all: connections 

connections: main.o libmy_mat.so
	$(CC) $(FLAGS) -o connections ./libmy_mat.so main.o

main.o: main.c my_mat.h
	$(CC) $(FLAGS) -c main.c

libmy_mat.so: my_mat.o 
	$(CC) -shared -o libmy_mat.so my_mat.o

my_mat.o: my_mat.h my_mat.c
	$(CC) $(FLAGS) -c my_mat.c



.PHONY: clean all

clean:
	rm -f *.o *.so connections
