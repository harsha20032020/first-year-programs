#include <stdio.h>
#include <math.h>
int main()
{
    int i,A[i],x,y,n,j,B[j];
    printf("ENTER THE NUMBER\n");
    scanf("%d",&x);
    y=x;
    while (y!=0)
    {
        
        y=y/10;
        n++;
    }
    for (i=0;i<n;i++)
    {
        A[i]=x%10;
    }
    for (j=n-1;j>0;j--)
    {
        for (i=0;i<n;i++)
        {
            B[j]=A[i];
        }
    }
    for (j=0;j<n;j++)
    {
        for (i=0;i<n;i++)
        {
            if(B[j]=A[i])
            {
                printf("the number is a palindrome\n");
            }
        }
    }
}

