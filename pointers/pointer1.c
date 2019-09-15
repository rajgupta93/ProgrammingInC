#include <stdio.h>

int main()
{
  int marks = 45;

  int *pmarks;

  pmarks = &marks;

  printf("marks: %d", marks);
  *pmarks = 4;

  printf("marks using pmarks: %d", *pmarks);

  return 0;
}