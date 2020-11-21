#include <stdio.h>
int main()
{
    int a, b,A[100]={0},i,j=0;
    printf("THE INTEGER\n");
    scanf("%d", &a); 
    for (i=0;i<100;i++)
    {
        A[i]=a%10;
        a = a/10;
        if (a != 0)
        {
            j++;
        }
    }
    for (i=0;i<j+1;i++)
    {

        printf("%d\n",A[i]);
    }
}