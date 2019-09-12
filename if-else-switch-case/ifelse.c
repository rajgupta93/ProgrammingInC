#include <stdio.h>

int main()
{

  int number = 34;

  if (number < 40)
  {
    if (number % 2 == 0)
      printf("%d is less than 40 and divisible by 2", number);
    else
      printf("%d is less than 40 but not divisible by 2", number);
  }
  else
  {
    printf("%d is not less than 40", number);
  }

  return 0;
}