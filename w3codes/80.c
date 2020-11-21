#include <stdio.h>
#include <math.h>
int main()
{
    int i,j,k;
    printf("ENTER THE SIDE LENGTH OF SQUARE\n");
    scanf("%d",&j);
    for (i=0;i<j;i++)
    {
        for (k=0;k<j;k++)
        {
            printf("# ");
        }
        printf("\n");
    }
}
