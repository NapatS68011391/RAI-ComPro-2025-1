#include <stdio.h>

int main (){
    int N, i, num;
    int sumEven = 0, sumOdd = 0;

    printf("N: ");
    scanf("%d", &N);

    for (i =1; i<= N; i++){
        printf("Input %d: ", i);
        scanf("%d", &num);

        if(num %2 == 0){
            sumEven += num;}
            else{
                sumOdd += num;
            }
        }

    printf("Output: Sum of even numbers: %d\n", sumEven);
    printf("Output: sum of odd numbers: %d\n", sumOdd);
    }
