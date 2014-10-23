#ifndef ____console__
#define ____console__

#include <stdio.h>

#define MAJOR_VERSION 1
#define MINOR_VERSION 0

int indentLoop;
int commandCount;


void printConsole();
void printWelcome();
void printversion();
void parseInput();

#endif /* defined(____console__) */

