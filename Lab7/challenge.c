#include <stdio.h>

int main() {
    int arr[5];
    int *p = arr;   // pointer to the array
    int i, j, temp;

    // Input
    printf("Enter 5 integers: ");
    for (i = 0; i < 5; i++) {
        scanf("%d", (p + i));   
    }

    // Use Bubble Sort
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4 - i; j++) {
            if (*(p + j) > *(p + j + 1)) {
                temp = *(p + j);
                *(p + j) = *(p + j + 1);
                *(p + j + 1) = temp;
            }
        }
    }

    // Output
    printf("Sorted: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", *(p + i));   
    }
    printf("\n");

    return 0;
}