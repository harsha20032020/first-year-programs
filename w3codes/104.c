#include <stdio.h>
int main()
{
    float x,y,incr;
    printf("enter the initial price \n");
    scanf("%f",&x);
    printf("enter the final price\n");
    scanf("%f",&y);
    incr=((y-x)/x)*100;
    printf("the increased rate is %d\n",y-x);
    printf("%f is the increase percentage\n",incr);
}