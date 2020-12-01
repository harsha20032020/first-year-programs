#include <stdio.h>
#include <string.h>
int main()
{
    char str1[20];
    int count=0,i;
    fgets(str1, sizeof str1,stdin);
    for (i=0;i<=strlen(str1);i++)
    {
        if (str1[i]==' ' )
        {
            count++;
            
        }
        printf("%c",str1[i]);
    }
    printf("%d\n",count+1);
}