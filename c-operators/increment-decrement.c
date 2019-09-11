#include <stdio.h>

int main()
{
  // ++ --
  int y = 9, z;

  z = ++y;
  printf("%d\n", z);

  z = ++y;
  printf("%d\n", z);
  printf("%d\n", y);
  return 0;
}