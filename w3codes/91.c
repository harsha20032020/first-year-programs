#include <stdio.h>
int main ()
{
    int hur,min;
    float deg,hourdeg,mindeg;
    printf("ENTER HOUR HAND\n");
    scanf("%d",&hur);
    printf("ENTER MINUTE HAND\n");
    scanf("%d",&min);
    hourdeg = hur * 30+ (min/2);
    mindeg= min*6;
    deg = hourdeg-mindeg;
    if (deg<0)
    {
        printf("%f and the other angle %f\n",-1*deg,360+deg);
    } 
    else 
    {
        printf("%f and the other angle %f\n",deg,360-deg);
    }
}

