#include <stdio.h>

int main()
{
    int a, b, sum;

    printf("Enter the two integers: ");
    scanf("%d %d", &a, &b);

    sum = (a*a)+(b*b);

    printf("Sum of squares of %d and %d is %d\n", a, b, sum);
    return 0;
}