#include <stdio.h>
int main()
{
    int min,max,sum=0,i;
    printf("enter the minimum and maximum values\n");
    scanf("%d %d",&min,&max);
    for (i=min;i<=max;i++)
    {
        printf("%d ",i);
        sum +=i ;
    }
    printf("\n");
    printf("%f\n",(float) sum/(max-min+1));
}