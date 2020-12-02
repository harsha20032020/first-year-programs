#include <stdio.h>
#include <math.h>
int main()
{
    int A[10]={0},i,x=0,n;
    printf("enter the number\n");
    scanf("%d", &n);
    while (n>0)
    {
        x = n%10;
        n/=10;
        if (x == 1 )
        {
            A[0]++;
        }
        if (x == 2 )
        {
            A[1]++;
        }
        if (x == 3 )
        {
            A[2]++;
        }
        if (x == 4 )
        {
            A[3]++;
        }
        if (x == 5 )
        {
            A[4]++;
        }
        if (x == 6 )
        {
            A[5]++;
        }
        if (x == 7 )
        {
            A[6]++;
        }
        if (x == 8 )
        {
            A[7]++;
        }
        if (x == 9 )
        {
            A[8]++;
        }

    }
    for (i=0;i<10;i++)
    {
        if (A[i]>1)
        {
            printf("REPEATED\n");
            break;
        }
        else
        {
            printf("NOT REPEATED\n");
            break;
        }
        
    }
    
}
   