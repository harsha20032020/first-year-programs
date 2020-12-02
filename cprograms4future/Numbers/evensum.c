#include <stdio.h>
#include <math.h>
int main()
{
    int min,max,sum=0,i;
    printf("ENTER THE NUMBERS TILL WHERE YOU WANT SUM OF EVEN NUMBERS first min  then max\n");
    scanf("%d %d",&min,&max);
    for (i=min;i<=max;i++)
    {
        if (i%2 == 0)
        {
            sum +=i;
        }
    }
    printf("the sum is %d\n",sum);
}
