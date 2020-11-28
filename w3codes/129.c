#include <stdio.h>
#include <math.h>
int main()
{
    int i;
    float A[10];
    printf("enter the first element\n");
    scanf("%f",&A[0]);
    for (i=0;i<10;i++)
    {
        A[i]=A[0]*pow(3,-i);
        printf("the array elements A[%d] is %f\n",i,A[i]);
    }
}