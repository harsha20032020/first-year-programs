#include <stdio.h>
int main()
{
    int i,j, sum = 0, n;
    printf("ENTER THE NUMBER\n");
    scanf("%d",&n);
    for (i=1;i<=10;i++)
    {
        printf("%d x %d = %d",n,i,n*i);
    }
}
