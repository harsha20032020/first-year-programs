#include <stdio.h>
int main ()
{
    int n,count=0,r;
    printf("enter the number\n");
    scanf("%d",&n);
    while (n>0)
    {
        r=n%10;
        n/=10;
        if (r==3)
        {
            count++;
        }
    }
    printf("the count is %d\n",count);
}