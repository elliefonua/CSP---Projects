#include <stdio.h>
#include <string.h>

int main(void){
    char lname[] = "Ellie";
    char prefix[] = "<<<";
    char fname[] = ">>>";
    strcat(prefix, lname);
    printf(prefix, fname);
    strcat(lname, fname);
    printf("%s", fname);
    return 0;
}