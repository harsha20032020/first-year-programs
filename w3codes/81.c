#include <stdio.h>
#include <math.h>
int main()
{
    int i,j,k;
    printf("ENTER THE SIDE LENGTH OF SQUARE\n");
    scanf("%d",&k);
    for (i=0;i<k;i++)
    {
        for (j=0;j<k;j++)
        if (i ==0 || i ==k-1)
        {
            printf("#");
        }
        else if (j==0 || j==k-1)
        {
            printf("#");
        }
        
        else
        {
            printf(" ");
        }
        printf("\n");
    }
}
   
