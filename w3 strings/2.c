#include <stdio.h>
#include <string.h>
int main()
{
    int y;
    char str1[20];
    gets(str1);
    y=printf("%s\n",str1);
    printf("%d\n",y);
}