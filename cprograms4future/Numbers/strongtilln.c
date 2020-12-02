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
    int z, x, sum = 0, y, c;
    printf("enter the number\n");
    scanf("%d", &c);
    for (z = 1; z <= c; z++)
    {
        sum = 0;
        while (z <c)
        {
            x = z % 10;
            sum += factorial(x);
            z /= 10;
        }
        if (sum == z)
        {
            printf("%d \n", z);
        }
    }
}