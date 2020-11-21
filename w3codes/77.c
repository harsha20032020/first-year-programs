#include <stdio.h>
int main()
{
    int p,t;
    double r,i;
    while (i !=0)
    {
    printf("ENTER PRINCIPAL\n");
    scanf("%d",&p);
    if (p ==0)
    {
        break;
    }
    printf("ENTER RATE IN DECIMALS\n");
    scanf("%lf",&r);
    if (r==0)
    {
        break;
    }
    printf("ENTER TIME IN DAYS\n");
    scanf("%d",&t);
    if (t==0)
    {
        break;
    }
    i= ((p*t*r)/365);
    printf("%lf\n",i);
    }
}