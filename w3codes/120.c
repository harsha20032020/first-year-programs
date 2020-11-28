#include <stdio.h>
int main()
{
    int n,i;
    printf("ENTER THE NUMBER\n");
    scanf("%d",&n);
    for (i=1;i<n;i++)
    {
        printf("%d,",i);
    }
    printf("%d\n",n);
}
