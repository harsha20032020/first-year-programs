#include <stdio.h>
#include <math.h>
int main()
{
    int x1,x2,y1,y2;
    float d;
    printf("ENTER THE POINT (x1,y1) :\n");
    scanf("%d %d",&x1,&y1);
    printf("ENTER THE POINT (x2,y2) :\n");
    scanf("%d %d",&x2,&y2);
    d =  ((x2-x1)*(x2-x1) +(y2-y1)*(y2-y1));
    printf("the distance is %f\n",sqrt(d));
}