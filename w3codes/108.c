#include <stdio.h>
int main()
{
    int n,m,sum1=0,sum2=0,i;
    printf("enter the lower and the upper number\n");
    scanf("%d %d",&n,&m);
    for (i=n;i<=m;i++)
    {
        if (i%2==0)
        {
            sum1 +=i;
        }
        else
        {
            sum2 +=i;
        }
    }
    printf("%d is the even sum and %d is the odd sum \n",sum1,sum2);
}