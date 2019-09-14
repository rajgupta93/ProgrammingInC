#include <stdio.h>

int main()
{
  int numbers[10] = {34, 3, 4, 5, 8, 2, 3, 5, 6, 9};
  int i, sum;
  numbers[0] = 900;

  // printf("%d \n", numbers[0]);

  for (i = sum = 0; i < 10; i++)
  {
    sum += numbers[i] * numbers[i];
  }
  printf("The Sum of Squares : %d", sum);
  return 0;
}