#include <stdio.h>
int main()
{
    int x,y,w,d;
    printf("enter the number of days\n");
    scanf("%d",&x);
    y = x/365;
    x -= y*365;
    w = x/7;
    x -= w*7;
    d= x;
    printf("the years = %d and weeks = %d and days = %d\n",y,w,d);
}
