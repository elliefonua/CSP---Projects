#include <stdio.h>

int age;

int main(void){
    printf("how old are you?\n");
    scanf("%d", &age);
    if (age >= 18){
        printf("you are old enough to vote!\n");
    }else{
        printf("your're not old enough to vote!");
    }
    return 0;
}