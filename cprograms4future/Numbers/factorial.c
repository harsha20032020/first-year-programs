#include <stdio.h>
#include <math.h>
int main()
{
    int n,factorial=1,i;
    printf("enter the number for factorial\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        factorial *=i;
    }
    printf("%d is the factorial of %d\n",factorial,n);
}