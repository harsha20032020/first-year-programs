#include <stdio.h>
int main()
{
    int n, i, sum = 0, x;
    printf("ENTER THE NUMBER\n");
    scanf("%d", &n);
    if (n % 2 == 0)
    {
        printf("EVENS\n");
        x = n + 2;
        for (i = 0; i < 10; i++)
        {

            printf("%d ", x);
            x += 2;
        }
        printf("\n");
        printf("ODDS\n");
        x = n + 1;
        for (i = 0; i < 10; i++)
        {
            printf("%d ", x);
            x += 2;
        }
    }
    else
    {
        printf("EVENS\n");
        x = n + 1;
        for (i = 0; i < 10; i++)
        {

            printf("%d ", x);
            x += 2;
        }
        printf("\n");
        printf("ODDS\n");
        x = n ;
        for (i = 0; i < 10; i++)
        {
            printf("%d ", x);
            x += 2;
        }

    }
}