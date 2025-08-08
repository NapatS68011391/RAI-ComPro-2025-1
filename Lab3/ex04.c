#include<stdio.h>

int main()
{
    int cl, ps, cp;
    float a;
    char name [20];

    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter your Calculus score: ");
    scanf("%d", &cl);
    printf("Enter your Physics score: ");
    scanf("%d", &ps);
    printf("Enter your Computer programming score: ");
    scanf("%d", &cp);

     a = (cl + ps + cp)/3.0;

    if (a >= 80){
        printf("%s, your average is %.2f. You got grade A\n ", name, a);
    }
    else if (70<= a <=80){
      printf("%s, your average is %.2f. You got grade B\n ", name, a);
    }
     else if (60<= a <=70){
        printf("%s, your average is %.2f. You got grade C\n ", name, a);
     }
     else if (50<= a <=60){
        printf("%s, your average is %.2f. You got grade D\n ", name, a);
     }
     else if (a < 50){
        printf("%s, your average is %.2f. You got grade F\n ", name, a);
     }


    return 0;

}
