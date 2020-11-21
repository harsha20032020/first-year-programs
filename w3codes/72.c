#include <stdio.h>
int main()
{
    int x,y;
    printf("ENTER NUMBER\n");
    scanf("%d",&x);
    if (x<0)
    {
       y = -x ;
    }
    printf("%d\n",y);
}