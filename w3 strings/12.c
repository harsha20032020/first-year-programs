#include <stdio.h>
#include <string.h>
int main()
{
    int n,x,y;
    printf("enter n\n");
    scanf("%d",&n);
    for (x=1;x<n;x++)
    {
        for (y=1;y<n;y++)
        {
            if (x*x+y*y==n*n)
            {
                printf("x=%d\ty=%d\tn=%d\n ",x,y,n);
            }
        }
    }
}