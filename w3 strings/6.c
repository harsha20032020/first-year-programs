#include <stdio.h>
#include <string.h>
int main()
{
    char s1[100], s2[100];
    printf("ENTER STRING 1\n");
    fgets(s1, sizeof s1, stdin);
    printf("ENTER STRING 2\n");
    fgets(s2, sizeof s2, stdin);
    {
        if (strlen(s1) == strlen(s2))
        {
            printf("SAME LENGTH\n");
        }
        else
        {
            printf("DIFFERENT LENGTH\n");
        }
    }
    {
        if (strcmp(s1, s2) == 0)
        {
            printf("They are also same\n");
        }
        else
        {
            printf("they arent same\n");
        }
    }
}
