#include <stdio.h>
int main()
{
    int A[8],i;
    for (i=0;i<=7;i++)
    {
        printf("enter A[%d];\n",i);
        scanf("%d",&A[i]);
    }
    for (i=7;i>=0;i--)
    {
        printf("The reverse array elements A[%d]=%d\n",7-i,A[i]);
    }
}