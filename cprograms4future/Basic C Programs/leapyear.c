#include <stdio.h>
int main()
{
    int x;
    printf("enter the year\n");
    scanf("%d",&x);
    if (x%4 == 0)
    {
        printf("LEAP YEAR\n");
    }
    else
    {
        printf("NOT A LEAP YEAR\n");
    }
}