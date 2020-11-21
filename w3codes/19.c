#include <stdio.h>
int main()
{
    int p,q,r,s;
    printf("ENTER P,Q,R,S\n");
    scanf("%d %d %d %d",&p,&q,&r,&s);
    if (r>=0 && s>=0 && (p%2 == 0))
    {
        if (q >r && q>s && q>p && (r+s>p+q))
        {
            printf("CORRECT VALUES\n");
        }
        else
        {
            printf("INCORRECT VALUES\n");
        }
    }
    else
        {
            printf("INCORRECT VALUES\n");
        }
}