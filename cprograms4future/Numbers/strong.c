#include <stdio.h>
#include <math.h>
int fac;
int factorial(int n)
{
    int fac = 1, i;
    for (i = 1; i <= n; i++)
    {
        fac *= i;
    }
    return fac;
}
int main()
{
    int z, x, sum = 0, y;
    printf("enter the number\n");
    scanf("%d", &z);
    y=z;
    while (z>0)
    {
        x = z%10;
        sum += factorial(x);
        z/=10;
    }
    if (y == sum)
    {
        printf("strong\n");
    }
    else
    {
        printf("not strong\n");
    }
}
