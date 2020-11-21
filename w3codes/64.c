#include <stdio.h>
int main()
{
    int x , sum = 0, min = 0, max = 0, n = 0, i;
    printf("ENTER NUMBERS(O OR NEGATIVE NUMBERS TO TERMINATE)\n");
    scanf("%d", x);
    while (x > 0)
    {
        for (i = 0; i < 100; i++)
        scanf("%d", x);
        sum += x;
        if (x > max)
        {
            x = max;
        }
        if (x < min)
        {
            x = min;
        }
        n++;
        scanf("%d", x);
    }
    printf("max=%d   min=%d   avg=%f\n", max, min, sum / (n+1));
}