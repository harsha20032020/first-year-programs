#include <stdio.h>
int main() 
{
    int A[5],i,pos=0,neg=0;
    for (i=0;i<5;i++)
    {
        printf("ENTER THE NUMBER\n");
        scanf("%d",&A[i]);
    }
    for (i=0;i<5;i++)
    {
        if ( A[i]>0 )
        {
          pos++;
        }
        else 
        {
            neg++;
        }
    }
    printf("the number of positive nos are %d and negatives are %d\n",pos,neg);
}