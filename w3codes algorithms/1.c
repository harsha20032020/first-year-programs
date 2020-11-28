#include <stdio.h>
int main ()
{
    int x,y;
    printf("Enter the 2 numbers\n");
    scanf("%d %d",&x,&y);
    if (x==y)
    {
        printf("%d\n",3*(x+y));
    }
    else
    {
        printf("%d\n",x+y);
    }
}