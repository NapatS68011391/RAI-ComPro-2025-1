#include <stdio.h>
int main()
{
    int num[8];
    int smallest;
    int largest;
    
    for(int i = 0; i<8; i++){
        printf("Enter number %d: ", i+1);
        scanf("%d", &num[i]);
    }
    smallest = largest = num[0]; //

    for(int i = 1; i<8; i++){
        if(num[i]<smallest){
            smallest = num[1];
        }
        if(num[i]>largest){
            largest = num[i];
        }
            
        }
        printf("Smallest number: %d\n", smallest);
        printf("Largest number: %d\n", largest);

        return 0;
    }

