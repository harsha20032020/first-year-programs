#include <stdio.h>
#include <math.h>
int main()
{
    int n, i, count = 0, j;
    printf("enter the number \n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        count=0;
        for (j = 1; j <= i; j++)
        {
            if (i % j == 0)
                count++;
        }
        if (count == 2)
            {
                printf("%d ", i);
            }
    }
}