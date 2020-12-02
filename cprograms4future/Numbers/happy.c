#include <stdio.h>
#include <math.h>
int main()
{
    int n, ninitial, sum = 0, x;
    printf("enter the number\n");
    scanf("%d", &n);
    ninitial = n;
    while (sum != 1 && sum != 4)
    {
        if (n > 0)
        {
            x = n % 10;
            sum += x * x;
            n /= 10;
        }
        else
        {
            n = sum;
        }
        if (sum == 1)
    {
        printf("HAPPY NUMBER\n");
    }
        sum = 0;
    }
    
}