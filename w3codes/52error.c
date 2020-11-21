#include <stdio.h>
int main ()
{
    int A[5],i,j,min,minpos;
    
    for (i=0;i<5;i++)
    {
        scanf("%d",&A[i]);
    }
    min=A[0];
    for (i=0;i<5;i++)
    {
        if (A[i]<min);
       {
        min=A[i];
        minpos=i;
       }
    }
    printf("the min vale in array is %d and its position is %d\n",min,minpos+1);
}
