#include <stdio.h>
int main ()
{
    int n,count,i,prc=0,j;
    printf("enter number\n");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        count = 0;
        for (j=1;j<=i;j++)
        {
            if (i%j==0)
            {
                count++;
            }
        }
        if (count==2)
        {
            prc++;
        }
    }
    printf("%d\n",prc);
}