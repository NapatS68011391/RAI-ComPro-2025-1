#include<stdio.h>
int main()
{
 char name[40];
float gpa;
printf ("Enter your name : ");
scanf ("%[^\n]",name);
printf ("Enter your GPA : ");
scanf ("%f",&gpa);
printf ("Name : %s\n" ,name);
printf ("GPA : %f\n" , gpa);

return 0;
}