#include <stdio.h>
int main()
{
    int a,b,i;
    a=1;b=100;
    for (i=0;i<=10;i++)
    {
        printf("a= %d and b = %d\n",a,b);
        a+=5;b-=10;
    }
}