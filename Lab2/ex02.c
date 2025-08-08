#include<stdio.h>
int main()
{
    int time;
    int min;
    int hour;
    printf("Enter total minutes");
    scanf("%d",&time);
    hour = time/60;
    min = time%60;
    printf("%d minute(s) is %d hour(s) and %d minute(s)",time,hour,min);
    
    return 0;
}