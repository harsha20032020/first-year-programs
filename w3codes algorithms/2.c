#include <stdio.h>
int main ()
{
    int x,y;
    printf("Enter the  number\n");
    scanf("%d ",&x);
    if (x>51)
    {
        printf("%d\n",3*(x-51));
    }
    else
    {
        printf("%d\n",51-x);
    }
}