#include <stdio.h>
#include <math.h>
int main()
{
    int n,x,sum=0,nactual;
    printf("ENTER THE NUMBER  \n");
    scanf("%d",&n);
    nactual=n;
    while (n>0)
    {
        x=n%10;
        n=n/10;
        sum += pow(x,3);
        x=0; 
    }
    if (nactual == sum)
        {
            printf("ITS AN ARMSTRONG NUMBER\n");

        }
        else
        {
            printf("NOT AN ARMSTRRONG NUMBER\n");
        }
}
