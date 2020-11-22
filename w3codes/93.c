#include <stdio.h>
int main()
{
    int n, x, y, i, count = 0, j;
    printf("enter number\n");
    scanf("%d", &n);
    for (i = 3; i < n; i++)
    {
        if (n % i == 0)
        {
            for (j = 2; j < i; j++)
            {
                if (i % j == 0)
                {
                    count++;
                }
            }
        }
    }
    if (count == 0)
    {
        printf("perfect prime\n");
    }
    else
    {
        printf("NOT A PERFECT PRIEME\n");
    }
}