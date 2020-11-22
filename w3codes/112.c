#include <stdio.h>
int main()
{
    int  i, max = 0, j,x;
    for(i=1;i<7;i++)
    {
        printf("ENTER NUMBER %d\n",i);
        scanf("%d",&x);
        if (x > max)
        {
            max = x;
            j = i;
        }
    }
    
    printf("%d is the maximim value and its position is %d\n", max, j );
}