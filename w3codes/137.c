#include <stdio.h>
double area(int a1, int b1, int a2,int b2,int a3,int b3)
{
    int ar;
    ar= 0.50f*((a1*(b2-b3))+(a2*(b3-b1)+(a3*(b1-b2))));
    if (ar<0)
    {
        ar=-ar;
    }
    return ar;
}
int main()
{
    int x1,y1,x2,y2,x3,y3,xp,yp;
    double ar1,ar2,ar3,ar4;
    printf("ENTER FIRST COORDINATES\n");
    scanf("%d,%d",&x1,&y1);
    printf("ENTER SECOND COORDINATES\n");
    scanf("%d,%d",&x2,&y2);
    printf("ENTER THIRD COORDINATES\n");
    scanf("%d,%d",&x3,&y3);
    printf("ENTER  COORDINATES\n");
    scanf("%d,%d",&xp,&yp);
    ar1= area(x1,y1,x2,y2,x3,y3);
    ar2= area(xp,yp,x1,y1,x2,y2);
    ar3= area(xp,yp,x2,y2,x3,y3);
    ar4= area(xp,yp,x1,y1,x3,y3);
    printf("ar1=%f ar2=%f ar3=%f ar4=%f\n",ar1,ar2,ar3,ar4);
    if (ar1==(ar2+ar3+ar4))
    {
        printf("THE POINT LIES INSIDE\n");
    }
    else
    {
        printf("the point doesnt lie inside\n");
    }
}