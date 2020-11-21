#include <stdio.h>
int main ()
{
    int i,n,fact=1,r;
    printf("ENTER THE NUMBER\n");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        fact*=i;
    }
    printf("%d\n",fact);
    r = fact%10;
    while (r ==0 )
    {
        r = fact%10;
        fact/=10;
    }
    printf("%d\n",r);
}