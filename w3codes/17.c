#include <stdio.h>
#include <math.h>
int main()
{
    int hrs,min,sec;
    int x;
    printf("ENTER THE SECONDS \n");
    scanf("%d",&x);
    hrs = x/3600;
    min = (x-(hrs*3600))/60;
    sec = ((x-hrs*3600-min*60));
    printf("hrs %d\nmin %d\nsec %d\n",hrs,min,sec);
}