#include <stdio.h> //header file

int main()
{
  int row, column; //initialization of variable
  int data[][3] = {
      {1, 3, 5},
      {2, 4, 7},
      {6, 3, 84}};  //initialization of 2-d array

  data[2][2] = 100;
  // printf("%d", data[2][2]);

  for (row = 0; row < 3; row++)  //loop to print all the elements of a array
  {
    for (column = 0; column < 3; column++)
      printf("%d ", data[row][column]); // printing the elements of the array
    printf("\n"); // priniting a new line 
  }

  return 0;
}
