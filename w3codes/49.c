#include <stdio.h>
int main ()
{
    int A[5],i;
    printf("ENTER NUMBER\n");
        scanf("%d",&A[0]);
    for (i=1;i<5;i++)
    {
        A[i]= 3*A[i-1];
    }
    for (i=0;i<5;i++)
    {
        printf("n[%d] = %d\n",i,A[i]);
    }
}

        