#include <stdio.h>
int main() 
{
    int x1,x2,x3;
    printf("ENTER SIDE \n");
    scanf("%d",&x1);
    printf("ENTER SIDE \n");
    scanf("%d",&x2);
    printf("ENTER SIDE \n");
    scanf("%d",&x3);
    if ( x1<(x2+x3) && x2 <(x1+x3) && x3<(x1+x2))
    {
        printf("the perimeter is %d\n",x1+x2+x3);
    }
    else
    {
        printf("A triangle cannot be formed\n");
    }
}