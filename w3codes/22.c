#include <stdio.h>
int main() 
{
    int x1,x2,x3,x4,x5,sum=0;
    printf("ENTER NUMBER \n");
    scanf("%d",&x1);
    printf("ENTER NUMBER \n");
    scanf("%d",&x2);
    printf("ENTER NUMBER \n");
    scanf("%d",&x3);
    printf("ENTER NUMBER \n");
    scanf("%d",&x4);
    printf("ENTER NUMBER \n");
    scanf("%d",&x5);
    if ( x1%2 == 1)
    {
        sum += x1;
    }
    if ( x2%2 == 1)
    {
        sum += x2;
    }
    if ( x3%2 == 1)
    {
        sum += x3;
    }
    if ( x4%2 == 1)
    {
        sum += x4;
    }
    if ( x5%2 == 1)
    {
        sum += x5;
    }
    printf("the sum is %d\n",sum);
}