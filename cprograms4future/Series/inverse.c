#include <stdio.h>
int main()
{
    int n,i;
    float sum=0;
    printf("ENTER THE VALUE OF N for reciprocal sum\n");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        sum += 1.0f/i;
    }
    printf("%f is the sum\n",sum);
}