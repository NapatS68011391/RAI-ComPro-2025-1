#include <stdio.h>

int main(){
    int start, end, i, j, isPrime;
    printf("Enter the start and end numbers: ");
    scanf("%d %d", &start, &end);

    printf("The prime numbers within the intervals are:\n");

    for(i = start; i<= end; i++){
        if(i<2)continue;

        isPrime = 1;

        for(j = 2; j<= i/2;j++){
            if(i%j == 0){
                isPrime = 0;
                break;
            }
        }
        if (isPrime == 1){
            printf("%d ", i );
        }
    }
    printf("\n");
}