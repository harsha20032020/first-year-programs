#include <stdio.h>
#include <math.h>
int main()
{
    int n,rev=0,x,actualn;;
    printf("enter the number\n");
    scanf("%d",&n);
    actualn=n;
    while (n>0)
    {
        x = n%10;
        rev = rev*10 +x;
        n/=10;
    }
    if (actualn == rev)
    {
        printf("PALINDROME\n");
    }
    else
    {
        printf("NOT A PALINDROME\n");
    }
}