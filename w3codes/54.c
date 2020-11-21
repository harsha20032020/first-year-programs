#include <stdio.h>
int main ()
{
    int cm;
    float i;
    printf("ENTER LENTH IN CM\n");
    scanf("%d",&cm);
    i = cm/2.54f;
    printf("the length in inches is %f\n",i);
}
