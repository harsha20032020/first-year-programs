#include <stdio.h>
int main ()
{
    int n,count=0,sum=0;
    scanf("%d",&n);
    do
    {
        sum+=n;
        scanf("%d",&n);
        count++;
    }
    while (n<888);
    printf("%f\n",(float)sum/count);
}