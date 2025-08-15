#include <stdio.h>
int main()
{
    int marks[5];
    int total = 0;
    int highest = 0;

    //Input
    for(int i = 0; i<5; i++){
        printf("Enter the marks of the student %d: ", i + 1);
        scanf("%d", &marks[i]);

        total += marks[i];
        if(marks[i] > highest){
            highest = marks[i];
        }
    }
    printf("Total marks: %d\n", total);
    printf("Highest marks: %d\n", highest);

    return 0;
    
}