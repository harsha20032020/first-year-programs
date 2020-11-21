#include <stdio.h>
int main() 
{
   int n,i;
   printf("enter the number till where you want even squares\n");
   scanf("%d",&n);
   for ( i=2 ; i<=n ; i+=2 )
   {
       printf("%d     %d\n",i,i*i);
   }
}