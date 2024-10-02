#include <stdio.h>
#include <time.h>

int hour;

int main ()
{
    time_t rawtime;
    struct tm *timeinfo;

    time(&rawtime);
    timeinfo = localtime (&rawtime);
    printf("current local time and date: %s", asctime(timeinfo));
    printf("tell me the hour in military time!:\n");
    scanf("%d", &hour);
    if (hour < 12){
        printf("good morning!\n");
    }else if (hour < 6){
        printf("good afternoon!\n");
    }else{
        printf("good evening!\n");
    }
    return 0;
}