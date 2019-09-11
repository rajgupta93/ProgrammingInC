#include <stdio.h>

int main()
{

  // logical operators
  // && logical AND
  // || logical OR
  // ! logical Not

  // true ~ non-zero | false ~ zero

  int a = 3, b = 4, c = 6, r;

  r = a && b != c && b == 6;

  printf("Result: %d \n", r);

  return 0;
}