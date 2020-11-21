#include <stdio.h>
int main() 
{
   int n,i;
   printf("enter the number \n");
   scanf("%d",&n);
   for(i=0;i<=100;i++)
   {
       if (i%n == 3)
       {
           printf("%d ",i);
       }
   }
}
   