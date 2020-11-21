#include <stdio.h>
int main() 
{
    int pass=1234,x;
    while (x != pass)
    {
        printf("ENTER PASSWORD\n");
        scanf("%d",&x);
        {
            if ( x == pass)
            {
                printf("CORRECT PASSWORD\n");
            }
            else
            {
                printf("INCORRECT PASSWORD\n");
            }
        }
       
    }
    
}