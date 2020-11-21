#include <stdio.h>
#include <math.h>
int main()
{
    int i,j;
    printf("enter till where you want tables\n");
    scanf("%d",&j);
    for (i=1;i<j-5;i+=3)
    {
        printf("%d\t\t%d\t\t%d\t\t%d\n",i,i+2,i+4,i+6);
    }
}