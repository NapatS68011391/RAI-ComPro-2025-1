#include <stdio.h>

int main() {
    int n,i,j;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        int count = 1;
        int alreadyCounted = 0;

    
        for (j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                alreadyCounted = 1;
                break;
            }
        }

        if (alreadyCounted) {
            continue;
        }

        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        printf("Element %d occurs %d times\n", arr[i], count);
    }

    return 0;
}