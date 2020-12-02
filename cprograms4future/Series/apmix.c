#include <stdio.h>
#include<math.h>
int main()
{
    int i,n,j,a,an,d,x,y,xn;
    int sum=0,intsum;
    printf("Till where you want numbers\n");
    scanf("%d",&n);
    a=-1,d=-6;
    x=4,y=6;
    if (n==1)
    {
        printf("-1 ");
    }
    if (n==2)
    {
        printf("-1 4\n");
    }
    printf("-1  4  ");
    for (i=1;i<=n-2;i++)
    {

        if (i%2==1)
        {
            
            an=a+d;
            printf("%d  ",an);
            a=an;
        }
        else
        {
            
            xn=x+y;
            printf("%d ",xn);
            x=xn;
        }
    }
}