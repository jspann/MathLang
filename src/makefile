CC=gcc
PP=g++
CFLAGS=-Wall

all:
	$(CC) -std=c99 -c main.c	
	$(CC) -o math Functions.o

32:
	$(CC) -arch i386 -c main.c	
	$(CC) -arch i386 -o math Compiler.o Error.o Clex.o CParse.o CGen.o Table.o Token.o Functions.o
	make clean
    
clean:
	rm -f math *.o