#include <stdio.h>
int main()
{
    int x,y,z;
    printf("enter the numbers to be sorted\n");
    scanf("%d %d %d",&x,&y,&z);
    if (x>y && x>z)
    {
        if (y>z)
        {
            printf("%d %d %d",x,y,z);
        }
        else
        {
            printf("%d %d %d",x,z,y);
        }
        
    }
    else if (y>x && y>z)
    {
        if (x>z)
        {
            printf("%d %d %d",y,x,z);
        }
        else
        {
            printf("%d %d %d",y,z,x);
        }
        
    }
    else if (z>y && z>x)
    {
        if (y>x)
        {
            printf("%d %d %d",z,y,x);
        }
        else
        {
            printf("%d %d %d",z,x,y);
        }
        
    }
    else
    {
        printf("error\n");
    }
}