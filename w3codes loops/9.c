#include <stdio.h>
int main()
{
    int A[5][5], moves, i, j, ind1, ind2, movesx, movesy;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            scanf("%d", &A[i][j]);
            if (A[i][j] == 1)
            {
                ind1 = i;
                ind2 = j;
            }
        }
    }
    movesx = (ind1 - 2);
    movesy = (ind2 - 2);
    if (movesx < 0)
    {
        movesx = -movesx;
    }
    if (movesy < 0)
    {
        movesy = -movesy;
    }
    printf("%d \n", movesx + movesy);
}