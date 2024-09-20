#include <stdio.h>
#include <string.h>

int main(void){
    char fname[30] = input();
    char capSix[40] = "###";
    printf("Hello, what is your name?\n");
    strcat(fname, "###");
    strcat(capSix, fname);
    printf("Hello %s \n", capSix);
    return 0;
}