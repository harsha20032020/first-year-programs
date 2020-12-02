#include <stdio.h>
int main()
{
    int n,i,x;
    float sum=0;
    printf("ENTER THE VALUE OF N for reciprocal sum\n");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        x = factorial(i);
        sum += 1.0f/x;
    }
    printf("%f is the sum\n",sum);
}
int factorial(int n)
{
    int fac = 1, i;
    for (i = 1; i <= n; i++)
    {
        fac *= i;
    }
    return fac;
}