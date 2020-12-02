#include <stdio.h>
int main()
{
    int f,n,sum=0,i,l,d;
    printf("enter number of terms\n");
    scanf("%d",&n);
    printf("enter first term\n");
    scanf("%d",&f);
    printf("enter common diff\n");
    scanf("%d",&d);
    l=f;
    for (i=1;i<=n;i++)
    {
        l+=d;
        sum += l;
        printf("%d ",l);
    }
    printf("%d is sum\n",sum);
}
