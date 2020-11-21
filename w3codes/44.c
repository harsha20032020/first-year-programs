#include <stdio.h>
int main() 
{
    int x,sum=0;
    printf("ENTER STUDENTS MARKS (0 TO TERMINATE)\n");
    while (x != 0)
    {
        scanf("%d",&x);
        sum += x;
    }
    printf("the sum of marks is %d\n",sum);
}