#include <stdio.h>
int main(){
    int a = 0;
    int *aPtr;
    aPtr = &a;
    int b = 5;
    int *bPtr;
    bPtr =&b;

     printf("Before reverse: a = %d, b = %d\n", a, b);
    printf("After reverse: a = %d, b = %d\n", *bPtr, *aPtr);
    return 0;
}