#include <stdio.h>
int main() 
{
    int x,y;
    printf("ENTER NUMBER 1 :\n");
    scanf("%d",&x);
    printf("ENTER NUMBER 2 :\n");
    scanf("%d",&y);
    if (x>y)
    {
        printf("DESENDING ORDER\n");
    }
    else
    {
        printf("ASCENDING ORDER\n");
    }
}