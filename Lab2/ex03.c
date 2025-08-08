#include<stdio.h>
int main()
{
    char name[40];
    int age;
    float height;
    int weight;
    char gender [20];
    char EducationQualification[40];
   
    printf("Enter your name:");
    scanf("%s");
    printf("Enter your age:");
    scanf("%d",&age);
    printf("Enter your height:");
    scanf("%f",&height);
    printf("Enter your weight:");
    scanf("%d",&weight);
    printf("Enter your gender:");
    scanf("%s",&gender);
    printf("Enter your Education Qualification:");
    scanf("%s",&EducationQualification);

    return 0;
}