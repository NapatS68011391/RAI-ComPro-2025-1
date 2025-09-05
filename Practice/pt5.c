#include<stdio.h>
int main()
{
    int i,j,s,row;
    scanf("%d", &row);
    for(i=1;i<=row;i++){
        for(s=1;s<=row-i;s++)
        printf(" ");
        for(j=1;j<=2*i-1;j++)
        printf("*");
        printf("\n");
    }
}