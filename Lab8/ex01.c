#include <stdio.h>
#include <math.h>
#define PI 3.14

    float Circumference(int r){
    float answer=0;
    answer = 2*PI*r;
    return answer;
    }

    float Area(int r)
{ float answer=0;
answer = PI*r*r ;
return answer;
}

int main(){
    int r;
    printf("Enter the radius in cm: "); 
    scanf("%d",&r);
    printf("Circumference: %.2f\n", Circumference(r));
    printf("Area: %.2f\n", Area(r));
}
