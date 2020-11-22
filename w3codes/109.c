#include <stdio.h>
int main()
{
    int n = 1, m, sum1 = 0, sum2 = 0, i;
    printf("enter the  number\n");
    scanf(" %d", &m);
    printf("EVEN SQUARES\n");
    for (i = n; i <= m; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d^2 = %d\n", i, i * i);
        }
    }
    printf("ODD SQUARES\n");
    for (i = n; i <= m; i++)
    {
        if (i%2 == 1)
        {
            printf("%d^2 = %d\n", i, i * i);
        }
    }
}