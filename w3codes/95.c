#include <stdio.h>
#include <math.h>
int main()
{
    float fah1, cel1,fah2,cel2;
    int i;
    printf("enter 1 for fahrenheit to celcius and 2 for celcius to fahrenheit\n");
    scanf("%d",&i);
    if (i == 1)
    {
        printf("enter temp in fahrenheit\n");
        scanf("%f", &fah1);
        cel1 = (0.555f * (fah1 - 32));
        printf("the temp in celcius %f\n", cel1);
    }
    else if (i==2)
    {
        printf("enter temp in celcius\n");
        scanf("%f", &cel2);
        fah2 = ((1.80f*cel2)+32) ;
        printf("the temp in fahrenheit %f\n", fah2);
    }
    else
    {
        printf("ERROR\n");
    }
}