#include <stdio.h>
#include <string.h>
int main()
{
    char s1[100], s2[26];
    int vowels=0,consonants=0,special,i,b,max=0,j;
    printf("ENTER STRING 1\n");
    fgets(s1, sizeof s1, stdin);
    for (i=0;i<=strlen(s1);i++)
    {
        for (b='a';b<='z';b++)
        {
            if (s1[i]==b)
            {
                s2[b-'a']++;
            }
        }
    }
    for (i=0;i<=26;i++)
    {
        if (s2[i]>max);
        {
            max=s2[i]; 
            j=i;
        }
    }
    printf("the highest character is %c and appears %d times\n",j+'a',max);
}