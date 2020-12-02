#include <stdio.h>
#include <string.h>
int main()
{
    int a[5] = {5, 4, 0, 1, 2}, temp, i, j;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (a[i] > a[i + 1])
            {
                temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
        }
    }
    printf("%d %d %d %d %d", a[0], a[1], a[2], a[3], a[4]);
}
