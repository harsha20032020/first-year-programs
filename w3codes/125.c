#include <stdio.h>
#include <math.h>
int main()
{
    int A[7],i;
    printf("enter the first element\n");
    scanf("%d",&A[0]);
    for (i=0;i<7;i++)
    {
        A[i]=A[0]*pow(2,i);
        printf("the array elements A[%d] is %d\n",i,A[i]);
    }
}