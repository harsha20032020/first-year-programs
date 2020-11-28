#include <stdio.h>
int main ()
{

  int array_size, i, x, z;
  int min_val, position;
  printf("Input the array size:\n");
  scanf("%d", &array_size);
  int vetor[array_size];
  printf("\nInput array elements:\n");
  for (i = 0; i < array_size; i++)
  {

    scanf("%d", &z);
    vetor[i] = z;

  }
  min_val = vetor[0];
  position = 0;
  for (i = 1; i < array_size; i++)
  {
   
    if (vetor[i] < min_val)
    {
      min_val = vetor[i];
      position = i;
    }
  }
  printf("\nSmallest Value: %d\n", min_val);
  printf("Position within array: %d\n", position);
}
