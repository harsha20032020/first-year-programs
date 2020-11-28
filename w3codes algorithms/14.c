#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int x,array1[5] = {1, 1, 2, 3, 1},i,count;
    for (i=.0;i<5;i++)
    {
        if (array1[i]==1 && array1[i+1]==2 && array1[i+2]==3)
        {
            count=1;
            
        }
        else
        {
            count=0;
            
        }
    }
    if (count==1)
    {
       printf("SUCCESS\n");
    }
    else
    {
        printf("FAILURE\n");
    }
    
}