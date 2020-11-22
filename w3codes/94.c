#include <stdio.h>
#include <math.h>
int main()
{
    float weight,height,bmi;
    printf("enter weight in kgs\n");
    scanf("%f", &weight);
    printf("enter height in feet\n");
    scanf("%f", &height);
    bmi = (weight/(pow(height,2)));
    printf("the bmi is %f\n",bmi);
}