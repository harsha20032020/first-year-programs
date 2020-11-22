#include <stdio.h>
int main()
{
    int  m;
    printf("enter the  number\n");
    scanf(" %d", &m);
    if (m>0 && m%2==0)
    {
        printf("THE NUMBER IS POSITIVE EVEN\n");
    }
    else if (m<0 && m%2==0)
    {
        printf("THE NUMBER IS NEGATIVE EVEN\n");
    }
    else if (m>0 && m%2==1)
    {
        printf("THE NUMBER IS POSITIVE ODD\n");
    }
    else if (m<0 && m%2==1)
    {
        printf("THE NUMBER IS NEGATIVE ODD\n");
    }
    else
    {
        printf("THE NUMBER IS ZERO");
    }
}
    
