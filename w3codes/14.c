#include <stdio.h>
int main()
{
    float x,y,z;
    printf("Input total distance in km\n");
    scanf("%f",&x);
    printf("Input total fuel spent in lit\n");
    scanf("%f",&y);
    printf("%0.2f",x/y);
}
