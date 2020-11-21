#include <stdio.h>
int main() 
{
    int i;
    float sum=0;
    for(i=1;i<=50;i++)
    {
        sum += 1.0f/i;
    }
    printf("the value of reciprocals till 50 are %f\n",sum);
}
