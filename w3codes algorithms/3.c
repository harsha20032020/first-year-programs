#include <stdio.h>
#include <stdbool.h>
int main ()
{
    int x,y;
    printf("Enter the 2 numbers\n");
    scanf("%d %d",&x,&y);
    if ((x+y)==30 || x==30)
    {
        printf("1\n");
    }
    else
    {
        printf("0\n");
    }
}