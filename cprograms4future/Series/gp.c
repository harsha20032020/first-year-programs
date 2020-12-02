#include <stdio.h>
#include <math.h>
int main()
{
    int f,n,sum=0,i,l,d;
    printf("enter number of terms\n");
    scanf("%d",&n);
    printf("enter first term\n");
    scanf("%d",&f);
    printf("enter common ratio\n");
    scanf("%d",&d);
    for (i=0;i<n;i++)
    {
        sum += f*pow(d,i);
    }
    printf("The sum of gp is %d\n",sum);
}