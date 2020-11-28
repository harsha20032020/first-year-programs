#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int x,y,r1,r2;
    printf("ENTER NUMBERs\n");
    scanf("%d %d", &x,&y);
    r1 = x%10;
    r2 = y%10;
    if (r1 == r2)
    {
        printf("both have same last digit\n");
    }
    else
    {
        printf("BOTH dont have same last digit\n");
    }
}
