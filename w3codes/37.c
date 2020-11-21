#include <stdio.h>
int main() 
{
    int x,y;
    printf("ENTER COORDINATE X :\n");
    scanf("%d",&x);
    printf("ENTER COORDINATE Y :\n");
    scanf("%d",&y);
    if ( x>0 && y>0)
    {
        printf("FIRST QUADRANT\n");
    }
    else if (x<0 && y<0)
    {
        printf("THIRD QUADRANT\n");
    }
    else if (x<0 && y>0)
    {
        printf("SECOND QUADRANT\n");
    }
    else
    {
        printf("FOURTH QUADRANT\n");
    }
}