#include <stdio.h>
int main()
{
    int x,y;
    printf("enter the 2 numbers\n");
    scanf("%d %d",&x,&y);
    if (x>y && y!=0)
    {
        if (x%y == 0)
        {
            printf("multiplies\n");
        }
        else
        {
            printf("doesnt multiply\n");
        }
        
    }
    else if (y>x && x!=0)
    {
        if (y%x == 0)
        {
            printf("multiplies\n");
        }
        else
        {
            printf("doesnt multiply\n");
        }
    }
    else
    {
        printf("ERROR\n");
    }
}
    