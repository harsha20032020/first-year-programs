#include <stdio.h>
int main()
{
    int i=1,n;
    printf("Enter number till where you want odd nos\n");
    scanf("%d",&n);
    do
    {
        printf("%d\n",i);
        i+=2;
    }
    while(i<=n);
}