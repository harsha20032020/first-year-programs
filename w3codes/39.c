#include <stdio.h>
int main() 
{
    int x,y,i;
    int sum=0;
    printf("ENTER NUMBER 1  :\n");
    scanf("%d",&x);
    printf("ENTER NUMBER 2  :\n");
    scanf("%d",&y);
    for (i=x;i<=y;i++)
    if ( i%17 != 0)
    {
        sum +=i;
    }
    printf("the sum of the numbers is %d\n",sum);
}
