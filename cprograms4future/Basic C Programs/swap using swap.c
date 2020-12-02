#include <stdio.h>
int main()
{
    int x,y,swap;
    printf("enter the 2 numbers separated by a space\n");
    scanf("%d %d",&x,&y);
    swap=x;
    x=y;
    y=swap;
    printf("after swap numbers are %d  %d\n",x,y);
}
