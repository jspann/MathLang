//
//  symtab.c
//  
//
//  Created by James Spann on 10/23/14.
//
//

#include "symtab.h"

#include <stdlib.h>
#include <stdio.h>
#include <string.h>



struct symtab *last_entry(struct symtab *start){
    struct symtab *p;
    p = start;
    while(p -> next != NULL) {
        p = p -> next;
    }
    return p;
}

void add_entry(char* name, int type, struct symtab *start){
    struct symtab *new;
    new = last_entry(start);
    int id;
    if(new == start) {
        new = start;
        id = 0;
    }else {
        new = malloc(sizeof(struct symtab));
        id = last_entry(start) -> id;
        last_entry(start) -> next = new;
    }
    new -> id = id + 1;
    new -> name = name;
    new -> type = type;
    new -> next = NULL;
}

struct symtab *find_entry(char* name, struct symtab *start){
    struct symtab *p;
    p = start;
    while(p -> next != NULL) {
        if(strcmp(p -> name, name) == 0) {
            return p;
        }
    }
}