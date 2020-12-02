#include <stdio.h>
int main()
{
    int days,dayval,i;
    scanf("%d",&days);
    scanf("%d",&dayval);
    printf("M \t T \t W \t T \t F \t SA \t SU\n");
    for (i=1;i<=days;i++)
    {
        if (dayval==1)
        {   
            printf("%d\t",i);
            if (i%7==0)
            {
                printf("\n");
            }
        }
        else if (dayval==2)
        {   
            printf(" \t 1");
            if (i%7==6)
            {
                printf("%d\t",i);
                printf("\n");
            }
        }


    }
}