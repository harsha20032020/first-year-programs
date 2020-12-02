#include <stdio.h>
#include<math.h>
int main()
{
    int f,n,sum=0,i,l,d;
    printf("enter number of terms\n");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        sum += i*i*pow(-1,i+1);
    }
    printf("sum is %d\n",sum);
}