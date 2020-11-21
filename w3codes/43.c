#include <stdio.h>
int main() 
{
    int x,y,i,z;
    printf("ENTER ROWS  :\n");
    scanf("%d",&y);
    printf("ENTER COLUMNS   :\n");
    scanf("%d",&x);
    for (i=1;i<=x*y;i++)
    {
        printf("%d ",i);
        if (i%x == 0)
        {
            printf("\n");
        }
    }
}

