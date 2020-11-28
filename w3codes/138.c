#include <stdio.h>
int main()
{
    int x1,y1,x2,y2,x3,y3,x4,y4;
    float r1,r2,r3;
    printf("ENTER FIRST COORDINATES\n");
    scanf("%d,%d",&x1,&y1);
    printf("ENTER SECOND COORDINATES\n");
    scanf("%d,%d",&x2,&y2);
    printf("ENTER THIRD COORDINATES\n");
    scanf("%d,%d",&x3,&y3);
    printf("ENTER  COORDINATES\n");
    scanf("%d,%d",&x4,&y4);
    r1= (y2-y1)/(x2-x1);
    r2= (y4-y3)/(x4-x3);
    if (r1==r2 || r1==-r2 )
    {
        printf("the lines are parallel\n");
    }
    else 
    {
        printf("INTERSECTING LINES\n");
    }
}
    