#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int x;
    printf("ENTER NUMBER\n");
    scanf("%d", &x);
    if (x%3==0)
    {
        printf("MULTIPLE OF 3\n");
    }
    else if (x%7==0)
    {
        printf("MULTIPLE OF 7\n");
    }
    else if (x%3==0 && x%7==0)
    {
        printf("MULTIPLE OF 3 AND 7\n");
    }
    else
    {
        printf("ERROR\n");
    }
}