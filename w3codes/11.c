#include <stdio.h>
int main()
{
    float x1,x2,f1,f2;
    printf("ENTER WEIGHT 1\n");
    scanf("%f",&x1);
    printf("ENTER NUMER OF 1\n");
    scanf("%f",&f1);
    printf("ENTER WEIGHT 2\n");
    scanf("%f",&x2);
    printf("ENTER NUMBER 2\n");
    scanf("%f",&f2);
    
    printf("THE AVG IS %f\n",(x1*f1+x2*f2)/(f1+f2));
}