#include <stdio.h>
#include <math.h>
int main()
{
    int i;
    for (i=0;i<=10;i++)
    {
        printf("%d  %f  %f\n",i,pow(2,i),pow(2,-i));
    }
}