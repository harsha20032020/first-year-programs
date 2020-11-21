#include <stdio.h>
int main()
{
    int i=1,sum=0,n,x=0;
    printf("enter limit\n");
    scanf("%d",&n);
    for (i=1;i<=n;i+=x)
    {
        sum += i*i*i*i;
        x++;
    }
    printf("%d\n",sum);
}
