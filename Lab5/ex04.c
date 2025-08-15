#include <stdio.h>
int main()
{
    int num[10];
    int even = 0;
    int odd = 0;

    //Input
    for(int i = 0; i<10; i++){
        printf("Enter the value %d: ", i+1);
        scanf("%d", &num[i]);

    if(num[i] %2 == 0){
        even++;
    } else{
        odd++;
    }
    }
    printf("Even numbers: %d\n", even);
    printf("Odd numbers: %d\n", odd);
}