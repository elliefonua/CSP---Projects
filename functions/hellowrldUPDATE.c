#include <stdio.h>

void name(char name[]){
    printf("hello %s\n", name);
}

int main(void){
    name("Ellie!");
    name("Rizzler!");
    name("Lindsey");
    name("Sophia!");
    name("Sawyer!");
    return 0;
}