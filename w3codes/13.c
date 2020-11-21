#include <stdio.h>
int main()
{
    int a,b,c;
    printf("ENTER FIRST NUMBER \n");
    scanf("%d",&a);
    printf("ENTER SECOND NUMBER\n");
    scanf("%d",&b);
    printf("ENTER THIRD NUMBER\n");
    scanf("%d",&c);
    if (a >=b && a>=c)
    {
        printf("%d is maximum\n",a);
    }
    else if (b >=a && b>=c)
    {
        printf("%d is maximum\n",b);
    }
    else 
    {
        printf("%d is the maximum\n",c);
    }
}
