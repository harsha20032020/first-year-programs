#include <stdio.h>
int main ()
{
    int p,t,r;
    float i;
    printf("ENTER PRICIPLE\n");
    scanf("%d",&p);
    printf("ENTER TIME\n");
    scanf("%d",&t);
    printf("ENTER RATE\n");
    scanf("%d",&r);
    i=(p*t*r)/100;
    printf("THE INTEREST IS %0.2f\n",i);
}