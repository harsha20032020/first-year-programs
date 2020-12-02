#include <stdio.h>
#include <string.h>
int main()
{
    char s1[100], s2[100];
    int vowels=0,consonants=0,special,i;
    printf("ENTER STRING 1\n");
    fgets(s1, sizeof s1, stdin);
    for (i=0;i<=strlen(s1);i++)
    {
        if (s1[i]=='a' || s1[i]=='e' || s1[i]=='i' || s1[i]=='o' || s1[i]=='u' )
        {
            vowels++;
        }
        else if ((s1[i]>='a' && s1[i]<='z') || (s1[i]>='A' && s1[i]<='Z'))
        {
            consonants++;
        }
        else
        {
           special++;
        }
    }
    printf("vowels=%d and consonants=%d\n",vowels,consonants);
}