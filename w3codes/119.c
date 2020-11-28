#include <stdio.h>
int main()
{
    int max,min,sum1=0,sum7=0,i;
    printf("ENTER THE 2 NUMBERS min first and max next\n");
    scanf("%d %d",&min,&max);
    for (i=min;i<=max;i++)
    {
        sum1+=i;
        if (i%7==0)
        {
            sum7+=i;
        }
    }
    printf("the sum is %d\n",sum1-sum7);
}
