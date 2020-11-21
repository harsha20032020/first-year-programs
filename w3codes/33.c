#include <stdio.h>
int main() 
{
    int max=0,A[5],j,i,pos;
    for(i=0;i<5;i++)
    {
        printf("ENTER number %d\n",(i+1));
        scanf("%d",&A[i]);
        if (A[i]>max)
        {
            max = A[i];
        }
    }
    for(j=0;j<5;j++)
    {
        if (max == A[j])
        pos=j;
    }

   printf("%d is maximum and %d is its position",max,pos+1);
}
