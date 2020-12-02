#include <stdio.h>
#include <math.h>
int main()
{
    int n,x,sum=0,nactual,i;
    printf("ENTER THE NUMBER  \n");
    scanf("%d",&n);
    for (i=0;i<=n;i++)
    {
        nactual=i;
        sum =0;
    while (i>0)
    {
        x=i%10;
        i=i/10;
        sum += (x*x*x);
        x=0; 
    }
    i=nactual;
    if (nactual == sum)
        {
            printf("%d  ",nactual);
        }
    }
}
        