#include <stdio.h>
int main () {

  float marks, tot_marks = 0;
  int i = 0, subject = 0;
  printf("Input five subject marks(0-100):\n");
  while (subject != 5)
  {
    scanf("%f", &marks);

    if (marks < 0 || marks > 100)
    {

      printf("Not a valid marks\n");

    }
    else
    {
      tot_marks += marks;
      subject++;
    }
  }
  printf("Average marks = %.2f\n", tot_marks/5);
} 
