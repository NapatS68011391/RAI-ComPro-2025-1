#include <stdio.h>
int main()
{
    int count;
    int array[10];
    
    for(count = 0; count<10;count++){
    printf("Enter the value %d here: ", count+1);
    scanf("%d", &array[count]);
    }

    printf("Values in array are: ");
    for(count = 0; count<10;count++){
    printf("%d", array[count]);
    if (count<9){
        printf(", ");
    }
    }
    return 0;
}