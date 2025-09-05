#include <stdio.h>
#include <math.h>

 int main(){

    struct vector {
        float x;
        float y;
    };
    struct vector u,v,result;

        printf("u.x: ");
        scanf("%f",&u.x);
        printf("u.y: ");
        scanf("%f",&u.y);

        printf("v.x: ");
        scanf("%f",&v.x);
        printf("v.y: ");
        scanf("%f",&v.y);

        result.x = u.x + v.x;
        result.y = u.y + v.y;

        printf("Resultant vector is equivalence to %.1fi + %.1fj\n", result.x, result.y);

        return 0;
    
}