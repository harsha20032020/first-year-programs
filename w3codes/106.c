#include <stdio.h>
int main()
{
    int x;
    int sum1 = 0, sum2 = 0;
    int count1 = 0, count2 = 0;
    int i;
    for (i = 0; i < 7; i++)
    {
        printf("ENTER %d number\n", i + 1);
        scanf("%d", &x);
        if (x >= 0)
        {
            count1++;
        }
        else 
        {
            count2++;
        }
        {
            if (x % 2 == 0)
            {
                sum1++;
            }
            else 
            {
                sum2++;
            }
        }
    }
    printf("%d number of positives and negatives are %d\n", count1, count2);
    printf("%d number of evens and  %d is odds\n", sum1, sum2);
}