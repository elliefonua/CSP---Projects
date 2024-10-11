#include <stdio.h>

char sibs[5][50] = {"DC", "Ellie", "Alma", "Viola", "Jr"};

int i;

int main (){
    while(i<5){
        printf("hello %s!\n", sibs[i]);
        i++;
    }
    return 0;
}