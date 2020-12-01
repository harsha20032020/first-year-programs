#include <stdio.h>
#include <string.h>
int main()
{
    char s1[100], s2[100];
    int alphabets,numbers,special,i;
    printf("ENTER STRING 1\n");
    fgets(s1, sizeof s1, stdin);
    for (i=0;i<=strlen(s1);i++)
    {
        if ((s1[i]>='a' && s1[i]<='z') || (s1[i]>='A' && s1[i]<='Z'))
        {
            alphabets++;
        }
        else if (s1[i]>='0'&& s1[i]<='9')
        {
            numbers++;
        }
        else
        {
            special++;
        }
    }
    printf("alpha =%d \nnumbers=%d\nspecial=%d\n",alphabets,numbers,special);
}