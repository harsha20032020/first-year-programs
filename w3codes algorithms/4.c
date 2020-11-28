#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int x;
    printf("ENTER NUMBER\n");
    scanf("%d", &x);
    printf("%d", test(x));
}
int test(int x)
{
    if (abs(x - 100) <= 10 || abs(x - 200) <= 10)
        return 1;
    return 0;
}
