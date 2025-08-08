#include<stdio.h>
int main()
{
    char Fname[40];
    char Lname[40];
    int age;
    float height;
    char Uni[40];

    printf("Enter your Full name: ");
    scanf("%s%s", Fname,Lname);
    printf("Enter your age: ");
    scanf("%d",&age);
    printf("Enter your height: ");
    scanf("%f", &height);
    printf("Enter your University name: ");
    scanf("%s", Uni);

    printf("Hi! Everyone. This is %c.%s from %s. I am  %d years old and my height is %.1f tall.",Lname[0],Fname,Uni,age,height);

return 0;
    }
    