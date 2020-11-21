#include <stdio.h>
int main() 
{
    int x,y,i;
    printf("ENTER NUMBER 1  :\n");
    scanf("%d",&x);
    for (i=0;i<x;i++)
    printf("%d %d %d\n",(3*i)+1,(3*i)+2,3*i+3);
   
}