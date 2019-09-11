#include <stdio.h>

int main()
{

  int a = 4, b = 6, c = 0;

  // c = c + a;
  c += a;
  printf("c += a: %d\n", c);

  // b = b - c;
  b -= c;
  printf("b -= c: %d\n", b);

  // c = c * 4;
  c *= 4;
  printf("c *= 4: %d\n", c);

  // a = a / 3;
  a /= 3;
  printf("a /= 3: %d\n", a);

  // a = a % 3;
  a %= 3;
  printf("a %%= 3: %d\n", a);

  return 0;
}
