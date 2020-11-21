#include <stdio.h>
int main() 
{
    int x,y,i;
    printf("ENTER NUMBER 1  :\n");
    scanf("%d",&x);
    for (i=1;i<=x;i++)
    printf("%d %d %d\n",i,i*i,i*i*i);
}