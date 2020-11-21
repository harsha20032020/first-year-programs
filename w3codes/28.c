#include <stdio.h>
int main() 
{
    int A[5],i,pos=0,sum=0;
    float avg;
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
          sum +=A[i];
        }
        avg = sum / pos;
    }
    printf("the average is %f\n",avg);
}