#include<stdio.h>
int main()
{
    //char name[10] = "Ami";
    int count, sum = 0, final;
    printf("INPUT final: ");
    scanf("%d", &final);

    for(count = 1;count <=final; count++)
    {
      if(count%2==0)
      sum = sum + count;

    }
    printf("%d\n",sum);
    return 0;
}