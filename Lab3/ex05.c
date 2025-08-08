#include<stdio.h>

int main()
{
    int height;
    float radius;
    float volume;

    printf("Enter cone height: ");
    scanf("%d", &height);
    printf("Enter cone base radious: ");
    scanf("%f", &radius);
    
    volume = (3.14159 * radius * radius * height)/3.0;
    printf("Cone volume = %.1f\n", volume);

    if (volume > 260){
        printf("This cone is perfect for Supun project");
    }
    else if (volume < 260){
        printf("This cone is not fit for this project");
    }

    return 0;
    }
