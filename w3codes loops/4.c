#include <stdio.h>
int main()
{
    int i, sum = 0, n;

    for (i = 1; i <= 10; i++)
    {
        printf("ENTER THE NUMBER N\n");
        scanf("%d", &n);
        sum += n;
    }
    printf("the sum = %d\n", sum);
}