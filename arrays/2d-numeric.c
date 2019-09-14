#include <stdio.h>

int main()
{
  int row, column;
  int data[][3] = {
      {1, 3, 5},
      {2, 4, 7},
      {6, 3, 84}};

  data[2][2] = 100;
  // printf("%d", data[2][2]);

  for (row = 0; row < 3; row++)
  {
    for (column = 0; column < 3; column++)
      printf("%d ", data[row][column]);
    printf("\n");
  }

  return 0;
}