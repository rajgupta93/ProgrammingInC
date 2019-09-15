#include <stdio.h>

int main()
{
  int num = 34;

  int *ptr1, **ptr2;

  ptr1 = &num;
  // *ptr1 = 4;
  ptr2 = &ptr1;
  **ptr2 = 4;

  printf("The value of num: %d", **ptr2);
  printf("The value of num: %d", **&ptr1);

  return 0;
}