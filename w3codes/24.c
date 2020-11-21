#include <stdio.h>
int main() 
{
    int x1,x2,x3;
    printf("ENTER NUMBER \n");
    scanf("%d",&x1);
    printf("ENTER NUMBER \n");
    scanf("%d",&x2);
    x3=x1*x2;
    if( x3 == x1*x2)
    {
        printf("MULTIPLIED\n");
    }
    else
    {
        printf("NOT MULTIPLIED\n");
    }
}