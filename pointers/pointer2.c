#include <stdio.h>

int main()
{

  int num1 = 12, num2 = 24;

  int *pnum1, *pnum2;

  pnum1 = &num1;
  pnum2 = &num2;

  printf("Enter two values: ");
  scanf("%d %d", pnum1, pnum2);

  printf("Values: %d %d", *pnum1, *pnum2);

  return 0;
}