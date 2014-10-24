//
//  symtab.h
//  
//
//  Created by James Spann on 10/23/14.
//
//

#ifndef ____symtab__
#define ____symtab__

#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct symtab {
    int id;
    char *name;
    int type;
    struct symtab *next;
};

enum types {
    KEYWORD = 1,
    CONSTANT,
    IDENTIFIER,
    OPERATOR,
    DELIMITER,
    WHITESPACE
};

struct symtab *last_entry(struct symtab *start);
void add_entry(char* name, int type, struct symtab *start);
struct symtab *find_entry(char* name, struct symtab *start);
#endif /* defined(____symtab__) */
