#include <stdio.h>
int main()
{
    int a, b;
    printf("Input two pairs values (integer values):\n");
    scanf("%d %d", &a, &b);
    if (a%b == 0)
    {
       printf("%d\n",a/b);
    }
    else
    {
        printf("DIVISION NOT POSSIBLE\n");
    }
}