#include <stdio.h>
#include<math.h>
int main()
{
    int i,n;
    float sum=0;
    printf("Till where you want sum\n");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        sum += (pow(i,i))/(factorial(i));
    }
    printf("the sum is %f\n",sum);
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