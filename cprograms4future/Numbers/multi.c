#include <stdio.h>
#include <math.h>
int main()
{
    int x,y,sum=0,i;
    printf("enter the numbers\n");
    scanf("%d %d",&x,&y);
    for (i=1;i<=y;i++)
    {
        sum +=x;
    }
    printf("%d\n",sum);
}