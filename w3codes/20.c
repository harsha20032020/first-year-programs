#include <stdio.h>
#include <math.h>
int main()
{
    float a,b,c,D;
    float x1,x2;
    printf("ENTER A\n");
    scanf("%f",&a);
    printf("ENTER B\n");
    scanf("%f",&b);
    printf("ENTER C\n");
    scanf("%f",&c);
    D = (b*b - 4*a*c);
    x1 = (-b+sqrt(D))/(2*a);
    x2 = (-b-sqrt(D))/(2*a);
    if ( D < 0)
    {
        printf("THIS EQN HAS IMAGINARY ROOTS\n");
    }
    else
    {
        printf("THE ROOTS OF THE EQN ARE %f AND %f\n",x1,x2);
    }

}