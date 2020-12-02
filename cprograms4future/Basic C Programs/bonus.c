#include <stdio.h>
int main()
{
    int salary;
    char gender;
    printf("ENTER F FOR women AND M for men\n");
    scanf("%c", &gender);
    printf("ENTER SALARY\n");
    scanf("%d", &salary);
    if (gender = 'M')
    {
        if (salary > 10000)
        {
            printf("the bonus is %f\n", 0.05f * salary);
        }
        else
        {
            printf("the bonus is %f\n", 0.07f * salary);
        }
    }
    else if (gender = 'F')
    {
        if (salary > 10000)
        {
            printf("the bonus is %f\n", 0.1f * salary);
        }
        else
        {
            printf("the bonus is %f\n", 0.12f * salary);
        }
    }
    else
    {
        printf("error\n");
    }
}
