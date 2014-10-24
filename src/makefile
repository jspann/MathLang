CC=gcc
PP=g++
CFLAGS=-Wall

all:
	$(PP) -std=c99 -c main.c
	$(PP) -std=c99 -c RPN.cpp
	$(CC) -std=c99 -c symtab.c
	$(CC) -std=c99 -c interpreter.c
	$(PP) -o math main.o RPN.o interpreter.o

32:
	$(CC) -arch i386 -c main.c	
	$(CC) -arch i386 -o math main.o
	make clean
    
clean:
	rm -f math *.o