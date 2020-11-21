#include <stdio.h>
int main ()
{
    int A[5],i,j;
    
    for (i=4;i>=0;i--)
    {
        scanf("%d",&A[i]);
    }
     for (i=0;i<5;i++)
    {
        printf("N[%d] = %d\n",i+1,A[i]);

    }
}
    