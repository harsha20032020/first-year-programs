#include <stdio.h>
int main() 
{
    int y,i,z;
    printf("ENTER NUMBER  :\n");
    scanf("%d",&y);
    for (i=1;i<=y;i++)
    {
        if (y%i == 0)
        {
            printf("%d\n",i);
        }
    }
}
