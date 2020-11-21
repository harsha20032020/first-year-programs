#include <stdio.h>
int main()
{
    int x,y;
    printf("ENTER n1 and n2\n");
    scanf("%d %d",&x,&y);
    if (x%y == 0)
    {
        printf("%d is a multiple of %d",x,y);
    }
    else
    {
        printf("they are not multiples\n");
    }
}