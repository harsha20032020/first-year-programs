#include <stdio.h>
int main()
{
    int d,days,weeks,years;
    scanf("%d",&d);
    years = d/365;
    weeks = (d - (years*365))/7;
    days = (d - (years*365)-(weeks*7));
    printf("years =%d ,weeks =%d, days=%d\n",years,weeks,days);
}
