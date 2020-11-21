#include <stdio.h>
int main() 
{
    int x,y;
    printf("ENTER NUMBER X dividend :\n");
    scanf("%d",&x);
    printf("ENTER NUMBER Y divisor:\n");
    scanf("%d",&y);
    if ( y != 0)
    {
        printf("division is possible. %0.2d\n",x/y);
    }
    else
    {
        printf("not possible\n");
    }
}