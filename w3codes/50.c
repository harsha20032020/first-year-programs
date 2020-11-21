#include <stdio.h>
int main ()
{
    int A[5],i;
    for (i=0;i<5;i++)
    {
        printf("ENTER %d NUMBER\n",i+1);
        scanf("%d",&A[i]);
    }
    for (i=0;i<5;i++)
    {
        if (A[i]<5)
        {
            printf("position %d     value  %d\n",i+1,A[i]);
        }
    }
}