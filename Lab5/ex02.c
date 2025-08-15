#include <stdio.h>
int main()
{
    int original[] = {1,2,3,4,5,6,7,8,9};
    int reversed[9];
    int size = 9;

    for(int n = 0; n<size; n++){
    reversed[n] = original[size - 1 - n];
    }
    printf("Reversed Array: ");
    for(int n = 0; n<size; n++){
        printf("%d", reversed[n]);
    }
    return 0;
}