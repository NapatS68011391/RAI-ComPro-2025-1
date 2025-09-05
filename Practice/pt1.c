#include<stdio.h>
int main()
{
    int i, j, row;
    scanf("%d", &row);
    for(i=1;i<=row;i++){
        for(j=1;j<=row;j++){
        if(i==row||j==1||i==j)
        printf("*");
        else
        printf(" ");
        }
        printf("\n");
    }
    
    
}