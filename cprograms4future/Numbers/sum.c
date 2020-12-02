#include <stdio.h>
#include <math.h>
int main()
{
    int i,n,sum=0;
    printf("ENTER N TILL WHERE YOU WANT SUM\n");
    scanf("%d",&n);
    for (i=0;i<=n;i++)
    {
        sum +=i;
    }
    printf("sum is %d\n",sum);
}
    