#include <stdio.h>
int main()
{
    int x1,x2,x3;
    printf("ENTER EMPLOYEE ID \n");
    scanf("%d",&x1);
    printf("ENTER NUMBER OF HOURS\n");
    scanf("%d",&x2);
    printf("ENTER AMOUNT PER HOUR\n");
    scanf("%d",&x3);
    printf("THE EMPLOYEE ID IS : %d\n",x1);
    printf("THE SALARY IS %d\n",x2*x3);
}