#include <stdio.h>
int main()
{
    int i,j, sum = 0, n;
    printf("ENTER THE NUMBER\n");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        for (j=1;j<=10;j++)
        {
            printf("%d x %d = %d  ",i,j,i*j);
        }
        printf("\n");
    }
}