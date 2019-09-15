#include <stdio.h>

void swap(int *p1, int *p2)
{
  int temp = *p1;

  *p1 = *p2;
  *p2 = temp;
}

int main()
{

  int x = 5, y = 2;

  printf("Before swap: x = %d, y = %d", x, y);
  swap(&x, &y);
  printf("After swap: x = %d, y = %d", x, y);

  return 0;
}