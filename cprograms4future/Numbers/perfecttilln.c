#include <stdio.h>
#include <math.h>
int main()
{
    int n,x,sum=0,nactual,i,j;
    printf("ENTER THE NUMBER  \n");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        sum = 0;
        for (j=1;j<i;j++)
        {
            if (i%j == 0)
            {
                sum += j;
            }
        }
        if (sum == i)
        {
            printf("%d ",i);
        }
    }
}