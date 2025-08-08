#include<stdio.h>
int main()
{
    char name[20];
    int studentID;
    int Programmingscore;
    float Physicsscore;
    float Calculusscore;
    float GPA;

    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter your student ID: ");
    scanf("%d",&studentID);
    printf("Enter your Programming score: ");
    scanf("%d",&Programmingscore);
    printf("Enter your Physics score: ");
    scanf("%f", &Physicsscore);
    printf("Enter your Calculus score: ");
    scanf("%f", &Calculusscore);
    
    GPA =(Programmingscore + Physicsscore + Calculusscore)/3;

    printf("Hi %s(%d)! Your GPA is %.2f",name,studentID,GPA);

    return 0;
}
