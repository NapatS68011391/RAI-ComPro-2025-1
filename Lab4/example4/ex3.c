#include<stdio.h>
int main()
{
    int i,j;
    for(i=0;i<3;i++) //row
    {
        for(j=0;j<3;j++) //col
        {
            printf("*");
        }
        printf("\n");
    }
}