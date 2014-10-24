#import <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <assert.h>

#import "console.h"
#import "RPN.h"
#import "symtab.h"

#define KNRM  "\x1B[0m"
#define KRED  "\x1B[31m"
#define KGRN  "\x1B[32m"
#define KYEL  "\x1B[33m"
#define KBLU  "\x1B[34m"
#define KMAG  "\x1B[35m"
#define KCYN  "\x1B[36m"
#define KWHT  "\x1B[37m"

#define RESETCOLOR "\033[0m"

//char** str_split(char* a_str, const char a_delim);
char userinput[20], str2[30];
int running = 0;
FILE *fp;

int main(int argc, char *argv[]){
    indentLoop = 0;
    commandCount = 0;
    //printWelcome();
    
    
    

    
    //setup symbol table
    while (running == 0) {
        printConsole();
        scanf("%s", &userinput);
        parseInput();
    }
	return 0;
}

void printConsole(){
    if (indentLoop == 0) {
        printf("oak:%d>",commandCount);
    }else{
        for (int d = 0; d<commandCount; d++) {
            printf(">");
        }
    }
}

void printWelcome(){
    printf("%sWelcome to the oak programming language!%s\n",KBLU,RESETCOLOR);
}

void printversion(){
    printf("Oak version %i.%i\n",MAJOR_VERSION,MINOR_VERSION);
    
}

void parseInput(){
    if (strcmp(userinput,"exit") == 0) {
        printf("\n");
        running = 1;
    }else if (strcmp(userinput,"clear") == 0){
        printf("\e[1;1H\e[2J");

    }else if (strcmp(userinput,"help") == 0){
        printf("Available commands:\n");
        printf("-------------------\n");
        printf("exit - exits oak\n");
        printf("clear - clears screen\n");
        printf("ver - displays oak version\n");
    }else if(strcmp(userinput,"ver") == 0){
        printversion();
    }else{
        //try to tokenize
        
        //WORKSprintf("\n%s\n",strtok(userinput,","));
        
        fp=fopen(strcpy(userinput,".oak"), "r");
        if(fp) {
            //read the file
            fclose(fp);
        }else{
            printf("Unrecognized command: %s\n",userinput);
            //exit(0);
        }

    }
    
    commandCount++;
}