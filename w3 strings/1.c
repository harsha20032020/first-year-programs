#include <stdio.h>
#include <string.h>
int main()
{
    char str1[20];
    fgets(str1, sizeof str1,stdin);
    printf("%s\n",str1);
}