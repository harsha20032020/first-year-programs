#include <stdio.h>
int main ()
{
    int A[5],i;
    for (i=0;i<5;i++)
    {
        printf("ENTER %d NUMBER\n",i+1);
        scanf("%d",&A[i]);
        if (A[i] <= 0)
        {
            A[i]=100;
        }
        
    }
    for (i=0;i<5;i++)
    {
        printf("n[%d] = %d\n",i,A[i]);
    }

}