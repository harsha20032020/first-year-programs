#include <stdio.h>
#include <math.h>
int main()
{
    int sqa,rectl,rectb,circr,parr1,parr2,parrh,n,tri1,tri2,tri3;
    float tris,area;
    printf("This is a program to find areas of various shapes\n");
    printf("Press 1 for Triangle ,2 for for square,3 for circle , 4 for rectangle , 5 for paralleleogram\n");
    scanf("%d",&n);
    if (n == 1)
    {
        printf("ENTER THE SIDE LENGTHS\n");
        scanf("%d %d %d",&tri1,&tri2,&tri3);
        tris = (tri1+tri2+tri3)/2;
        area = sqrt (tris*(tris-tri1)*(tris-tri2)*(tris-tri3));
        printf("the area is %f\n",area);
    }
    else if (n==2)
    {
        printf("ENTER THE SIDE LENGTH OF SQUARE\n");
        scanf("%d",&sqa);
        area = sqa*sqa;
        printf("The area is %f\n",area);
    }
    else if (n==4)
    {
        printf("ENTER THE LENGTH AND BREADTH OF RECT \n");
        scanf("%d %d",&rectl,&rectb);
        area = rectl*rectb;
        printf("The area is %f\n",area);
    }
    else if (n==3)
    {
        printf("ENTER THE RADIUS OF CIRCLE \n");
        scanf("%d ",&circr);
        area = 3.140f*circr*circr;
        printf("The area is %f\n",area);
    }
    else if (n==5)
    {
        printf("ENTER THE LENGTH OF PARALLEL SIDES AND HEIGHT\n");
        scanf("%d %d %d",&parr1,&parr2,&parrh);
        area = (parr1+parr2)*parrh;
        printf("The area is %f\n",area);
    }
    else
    {
        printf("ERROR\n");
    }
}
    

