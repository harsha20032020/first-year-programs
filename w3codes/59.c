#include <stdio.h>
int main()
{
    float x=0;
    int n,i;
    printf("enter the number of terms you want to add\n");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        x += (1.0f/i);
        
    }
    printf("%f",x);
}