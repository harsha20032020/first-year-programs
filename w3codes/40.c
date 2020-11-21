#include <stdio.h>
int main() 
{
    int x,y,i;
    printf("ENTER NUMBER 1  :\n");
    scanf("%d",&x);
    printf("ENTER NUMBER 2  :\n");
    scanf("%d",&y);
    for (i=x;i<y;i++)
    if ( i%7 == 2 || i%7==3 )
    {
        printf("%d ",i);
    }
    printf("\n");
}