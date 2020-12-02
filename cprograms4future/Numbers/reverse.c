#include <stdio.h>
#include <math.h>
int main()
{
    int n,rev=0,x;
    printf("enter the number\n");
    scanf("%d",&n);
    while (n>0)
    {
        x = n%10;
        rev = rev*10 +x;
        n/=10;
    }
    printf("reverse is %d\n",rev);
}