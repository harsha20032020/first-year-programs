#include <stdio.h>
int main ()
{
    int min,max,i,sum=0,actuali,r;
    printf("enter the minimum and maximum\n");
    scanf("%d %d",&min,&max);
    for (i=min;i<=max;i++)
    {
        while (i>0)
        {
            actuali=i;
            r = i%10;
            sum += r;
            i/=10;
            sum *=10;
        }
        sum /=10;
        if (sum == actuali)
        {
            printf("%d \n",sum);
        }

    }
}