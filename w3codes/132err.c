#include <stdio.h>
int main ()
{
    int A[8],max1=0,max2=0,max3=0,i;
    for (i=0;i<8;i++)
    {
        printf("ENTER HEIGHT OF BUILDING %d\n",i+1);
        scanf("%d",&A[i]);
        if (A[i]>max1)
        {
            max1=A[i];
        }
        else if (A[i]>max2)
        {
            max2=A[i];
        }
        else if (A[i]>max3)
        {
            max3=A[i];
        }
        else
        {
            printf("error\n");
        }
    }
    printf("%d %d %d\n",max1,max2,max3);
}