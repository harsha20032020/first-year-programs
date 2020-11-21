#include <stdio.h>
int main() 
{
    int x,y,max,min,i,sum=0;
    printf("ENTER NUMBER 1 :\n");
    scanf("%d",&x);
    printf("ENTER NUMBER 2 :\n");
    scanf("%d",&y);
    if (x>y)
    {
       max=x;
       min=y;
    }
    else
    {
        max=y;
        min=x;
    }
    {
    if (min%2 == 0 && i <= max)
    {
        for (i=min+1;i<=max;i+=2)
        {
            printf("%d  \n",i);
            sum +=i;
        }
    }
    else
    {
        for (i=min;i<=max;i+=2)
        {
            printf("%d  \n",i);
            sum +=i;
        }   
    }
    }
    printf("THE SUM IS %d\n",sum);
}