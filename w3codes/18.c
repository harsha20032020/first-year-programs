#include <stdio.h>
int main()
{
    int d,days,months,years;
    scanf("%d",&d);
    years = d/365;
    months = (d - (years*365))/30;
    days = (d - (years*365)-(months*30));
    printf("years =%d ,months =%d, days=%d\n",years,months,days);
}