#include <stdio.h>
#include <math.h>
int main()
{
    int n,x,sum=0,nactual,i;
    printf("ENTER THE NUMBER  \n");
    scanf("%d",&n);
    for (i=1;i<n;i++)
    {
        if (n%i == 0)
        {
            sum+=i;
        }
    }
    if (sum == n)
    {
        printf("PERFECT NUMBER\n"); 
    }
    else
    {
        printf("NOT A PERFECT NUMBER\n");
    }
}
