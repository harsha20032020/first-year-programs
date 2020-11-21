#include <stdio.h>
#include <math.h>
int main()
{
    int hund,fift,twen,tens,five,twos,ones;
    int x;
    printf("ENTER THE AMOUNT \n");
    scanf("%d",&x);
    hund = x/100;
    fift = (x-hund*100)/50;
    twen = (x-hund*100-fift*50)/20;
    tens = (x-hund*100-fift*50-twen*20)/10;
    five = (x-hund*100-fift*50-twen*20-tens*10)/5;
    twos = (x-hund*100-fift*50-twen*20-tens*10-five*5)/2;
    ones = (x-hund*100-fift*50-twen*20-tens*10-five*5-twos*2)/1;
    printf("100s : %d\n50s  : %d\n20s  : %d\n10s  : %d\n5s   : %d\n2s   : %d\n1s   : %d\n",hund,fift,twen,tens,five,twos,ones);
}