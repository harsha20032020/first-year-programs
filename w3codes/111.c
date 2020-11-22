#include <stdio.h>
int main()
{
    int  m,i;
    printf("enter the  number\n");
    scanf(" %d", &m);
    for (i=1;i<=100;i++)
    {
        if (i%m == 3)
        {
            printf("%d\n",i);
        }
    }
}