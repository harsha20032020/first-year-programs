#include <stdio.h>
int main()
{
    int n,i,m,sum=0;
    printf("ENTER THE NUMBER\n");
    scanf("%d",&n);
    printf("ENTER THE NUMBER OF TERMS\n");
    scanf("%d",&m);
    for (i=n;i<n+2*m;i+=2)
    {
        if (i%2==1)
        {
            sum+=i;
        }
    }
    printf("%d is the sum\n",sum);
}