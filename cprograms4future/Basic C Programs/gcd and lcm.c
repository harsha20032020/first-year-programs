#include <stdio.h>
int main ()
{
    int x,y,r,max,min;
    printf("enter the 2 numbers.\n");
        scanf("%d %d",&x,&y);
        if (x>y)
        {
            max =x;
            min=y;
        }
        else
        {
            max =y;
            min =x;
        }
        
    while ( min!= 0)
    {
        r = max%min;
        max=min;
        min=r;
    }
    printf("the gcd is %d\n",max);
    printf("LCM = %d\n",((x*y)/max));
}
