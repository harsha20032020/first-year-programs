#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int x;
    printf("ENTER NUMBER\n");
    scanf("%d", &x);
    if (x<0)
    {
        printf("TEMP LESS THAN 0\n");
    }
    else if (x>100)
    {
        printf("TEMP GREATER THAN 100\n");
    }
    else
    {
        printf("ERROR\n");
    }
}