#include <stdio.h>
#include<math.h>
int main()
{
    int i,n,j;
    int sum=0,intsum;
    printf("Till where you want sum\n");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        intsum=1;
        for (j=1;j<=i;j++)
        {
            intsum *= j;
        }
        sum += intsum;
    }
    printf("%d is the sum\n",sum);
}