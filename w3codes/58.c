#include <stdio.h>
int main()
{
    float A[4],max,min;
    int i;
    printf("THE NUMBERS\n");
    for (i=0;i<4;i++)
    {
        scanf("%f",&A[i]);
        max=A[0];
        min=A[0];
        if (A[i]>max)
        {
            max=A[i];
        }
        if (A[i]<min)
        {
            min=A[i];
        }
    }
    printf("%f  \n%f   %f",max-min,max,min);
}
    
