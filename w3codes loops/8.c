#include <stdio.h>
int main()
{
    int i,j, sum = 0, n;
    printf("ENTER THE NUMBER\n");
    scanf("%d",&n);
    for (i=1;i<=2*n-1;i+=2)
    {
       printf("%d ",i);
       sum += i;
    }
    printf("\n");
    printf("the sum is %d\n",sum);
}