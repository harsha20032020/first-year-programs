#include <stdio.h>
int main ()
{
    int x,y,dig=0,sum;
    printf("enter the numbers\n");
    scanf("%d %d",&x,&y);
    sum=x+y;
    while (sum>0)
    {
        sum/=10;
        dig++;
    }
    printf("%d \n",dig);
}