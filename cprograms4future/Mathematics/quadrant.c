#include <stdio.h>
#include <math.h>
int main()
{
    int x,y;
    printf("ENTER THE VALUE OF X coordinates \n");
    scanf("%d,%d",&x,&y);
    if (x > 0 && y > 0)
    {
        printf("FIRST QUADRANT\n");
    }
    else if (x < 0 && y > 0)
    {
        printf("SECOND QUADRANT\n");
    }
    else if (x < 0 && y < 0)
    {
        printf("THIRD QUADRANT\n");
    }
    else
    {
        printf("FOURTH QUADRANT\n");
    }
}

