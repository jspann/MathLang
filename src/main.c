#import <stdio.h>

#import "console.h"

#define KNRM  "\x1B[0m"
#define KRED  "\x1B[31m"
#define KGRN  "\x1B[32m"
#define KYEL  "\x1B[33m"
#define KBLU  "\x1B[34m"
#define KMAG  "\x1B[35m"
#define KCYN  "\x1B[36m"
#define KWHT  "\x1B[37m"

char userinput[20], str2[30];


int main(int argc, char *argv[]){
    indentLoop = 0;
    commandCount = 0;
    printWelcome();
    printversion();
    
	return 0;
}

void printConsole(){
    if (indentLoop == 0) {
        printf("\nlang:%d>",commandCount);
    }else{
        for (int d = 0; d<commandCount; d++) {
            printf(">");
        }
    }
    
    scanf("%s", &userinput);

}

void printWelcome(){
    printf("%sWelcome to the math programming language!",KBLU);
    printversion();
}

void printversion(){
    printf("Math version %i.%i\n",MAJOR_VERSION,MINOR_VERSION);
    
}
