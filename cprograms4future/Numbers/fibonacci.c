#include <stdio.h>
#include <math.h>
int main()
{
    int n,i,x=0,y=1,z;
    printf("enter number of terms to print\n");
    scanf("%d",&n);
    printf("0 1 ");
    for (i=0;i<n-2;i++)
    {
        z=x+y;
        printf("%d ",z);
        x=y;
        y=z;
    }
}
