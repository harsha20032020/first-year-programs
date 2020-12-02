#include <stdio.h>
#include <math.h>
int main()
{
    int n,i,count=0;
    printf("enter the number to check prime\n");
    scanf("%d",&n);
    for (i=2;i<n;i++)
    {
        if (n%i == 0)
        {
            count++;
        }
    }
    if (count > 0)
    {
        printf("NOT A PRIME\n");
    }
    else
    {
        printf("PRIME\n");
    }
    
}