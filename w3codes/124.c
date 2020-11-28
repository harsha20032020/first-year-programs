#include <stdio.h>
int main()
{
    int A[7],i;
    for (i=0;i<7;i++)
    {
        printf("enter A[%d];\n",i);
        scanf("%d",&A[i]);
    }
    for (i=0;i<7;i++)
    {
        if (A[i]<=0)
        {
            A[i]=1;
        }
        printf("The array element A[%d]=%d\n",i,A[i]);
    }
}