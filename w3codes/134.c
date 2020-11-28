#include <stdio.h>
int main ()
{
    int x,y,z,s1;
    printf("enter the numbers\n");
    scanf("%d %d %d",&x,&y,&z);
    s1 =(x*x+y*y);
    if (z*z == s1)
    {
        printf("THE TRIANGLE IS RIGHT ANGLED\n");
    }
    else
    {
        printf("THE TRIANGLE IS NOT RIGHT ANGLED\n");
    }
}