#include <stdio.h>
#include <string.h>
int main()
{
    char str1[20],i;
    gets(str1);
    for (i=0;i<=strlen(str1);i++)
    {
        printf("%c ",str1[i]);
    }
}