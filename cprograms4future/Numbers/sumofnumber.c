#include <stdio.h>
#include <math.h>
int main()
{
    int A[100],n,sum=0,i;
    printf("the number is \n");
    scanf("%d",&n);
    for (i=0;i<100;i++)
    {
        A[i] = n%10;
        n/=10;
        sum += A[i];
    }
    printf("the sum is %d\n",sum);
}