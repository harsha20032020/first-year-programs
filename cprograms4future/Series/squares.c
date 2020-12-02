#include <stdio.h>
int main()
{
    int f,n,sum=0,i,l,d;
    printf("enter number of terms\n");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        sum += i*i;
    }
    printf("sum is %d\n",sum);
}