#include <stdio.h>
int main()
{
    float x, sum1 = 0, sum2 = 0;
    int count1 = 0, count2 = 0;
    int i;
    for (i = 0; i < 7; i++)
    {
        printf("ENTER %d number\n", i + 1);
        scanf("%f", &x);
        if (x >= 0)
        {
            sum1 += x;
            count1++;
        }
        else
        {
            sum2 += x;
            count2++;
        }
    }
    printf("%d number of positives with avg %f\n", count1, sum1 / count1);
    printf("%d number of negatives with avg %f\n", count2, sum2 / count2);
}