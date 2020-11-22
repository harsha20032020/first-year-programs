#include <stdio.h>
int main()
{
    int i,sum=0,n;
    printf("ENTER THE NUMBER N\n");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        printf("%d ",i);
        sum+=i;
    }
    printf("the sum = %d\n",sum);
}