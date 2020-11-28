#include <stdio.h>
int main()
{
    int i,m;
    printf("ENTER THE NUMBER\n");
    scanf("%d",&m);
    for (i=0;i<10;i++)
    {
        printf("A[%d]=%d\n",i,i%m);
    }
}
