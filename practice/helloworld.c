#include <stdio.h>

int main(void){
    char name[30];
    printf("what is your name?: \n");
    scanf("%s", name);
    printf("Hello %s", name);
    return 0;
}