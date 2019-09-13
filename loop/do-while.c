#include <stdio.h>

int main()
{

  int number = 90;

  do
  {
    printf("%d ", number);
    number++;
  } while (number <= 100);

  printf("\n Value after do while loop: %d \n", number);

  return 0;
}