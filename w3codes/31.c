#include <stdio.h>
int main() 
{
   int n;
   printf("enter the number \n");
   scanf("%d",&n);
   if ( n>0 && n%2 == 0)
   {
       printf("THE NUMBER IS POSITIVE EVEN\n");
   }
   else if ( n>0 && n%2 == 1)
   {
       printf("THE NUMBER IS POSITIVE ODD\n");
   }
   else if ( n<0 && n%2 == 0)
   {
       printf("THE NUMBER IS NEGATIVE EVEN\n");
   }
   else if ( n<0 && n%2 ==1 )
   {
       printf("THE NUMBER IS NEGATIVE ODD\n");
   }
   else
   {
       printf("the number is 0\n");
   }
}