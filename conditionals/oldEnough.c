#include <stdio.h>

int age;

int main(void){
    printf("how old are you?\n");
    scanf("%d", &age);
    if (age >= 18){
        printf("you are old enough to vote!\n");
    }else if (age >= 16){
        printf("you are old enough to drive!\n");
    }else if (age >= 15){
        printf("you are old enough to have a learners permit!\n");
    }else{
        printf("you are old enough to go to school!\n");
    }
    return 0;
}