#include <stdio.h>
#include <string.h>
int main()
{
    char s1[100], s2[100];
    int alphabets,numbers,special,i;
    printf("ENTER STRING 1\n");
    fgets(s1, sizeof s1, stdin);
    strcpy(s2,s1);
    printf("this is copied == %s\n",s2);
    printf("%d\n",strlen(s2));
}
