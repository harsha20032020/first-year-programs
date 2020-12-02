#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c,D;
    float x1,x2;
    printf("ENTER COEFFIENTS OF X^2 ,X,AND CONSTANT \n");
    scanf("%d %d %d",&a,&b,&c);
    D=(b^2-4*a*c);
    if (D>=0)
    {
        x1= (-b + sqrt(D))/(2*a);
        x2= (-b - sqrt(D))/(2*a);
        printf("THE ROOTS ARE %0.2f and %0.2f\n",x1,x2);
    }
    else
    {
        printf("NO RATIONAL ROOTS\n");
    }
}
    
