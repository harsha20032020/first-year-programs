#include <stdio.h>
int main()
{
    int min,max,sum=0,i;
    printf("enter the minimum and maximum values\n");
    scanf("%d %d",&min,&max);
    for (i=min+1;i<max;i++)
    {
        if (i%2 == 0)
        {
            sum += i;
        }
    }
    printf("the sum is %d\n",sum);
}