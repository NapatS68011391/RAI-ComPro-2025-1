#include<stdio.h>
int main()
{
int a;
float b;
char c[20];
printf("Please enter an integer value: ");
scanf("%d", &a);
printf("You entered %d\n", a);
printf("Please enter an integer value: ");
scanf("%f", &b);
printf("You entered %0.1f\n", b);
printf("Please enter a character: ");
scanf("%s",c);
printf("You entered %s\n", c);
return 0;
}
        