#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c,D;
    float x1,x2;
    printf("ENTER 2 numbers\n");
    scanf("%d %d",&a,&b);
    printf("ENTER THE NUMBER TO PERFORM OPERATIONS \n1 FOR ADDITION\n2 FOR SUBTRACTION \n3 FOR MULTIPLICATION\n4 FOR DIVISION\n");
    scanf("%d",&D);
    if (D==1)
    {
        printf("the sum is %d\n",a+b);
    }
    else if (D==2)
    {
        if (a-b>0)
        printf("the difference is %d\n",a-b);
        else
        printf("the difference is %d\n",b-a);
    }
    else if (D==3)
    {
        printf("the Multiplication is %d\n",a*b);
    }
    else if (D==4)
    {
        if (b!=0)
        printf("the sum is %f\n",a/b);
        else
        printf("INVALID\n");
    }
}