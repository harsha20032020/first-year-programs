#include <stdio.h>
int main()
{
    int i, sum = 0, n;
    printf("ENTER THE NUMBER\n");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        printf("The cube of the number %d is %d\n",i,i*i*i);
    }
}