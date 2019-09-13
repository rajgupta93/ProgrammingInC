#include <stdio.h>

int main()
{

  int start = 1; // 0..6...20 21
  int step = 1;
  int end = 200;

  while (start <= end)
  {
    printf("%d ", start);
    start = start + step;
  }

  return 0;
}