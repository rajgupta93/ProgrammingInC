#include <stdio.h>

int main()
{

  int monthNumber;

  printf("Enter month number: ");
  scanf("%d", &monthNumber);

  switch (monthNumber)
  {
  case 11:
  case 12:
  case 1:
  case 2:
    printf("Winter");
    break;
  case 3:
  case 4:
  case 5:
  case 6:
    printf("Summer");
    break;
  case 7:
  case 8:
  case 9:
  case 10:
    printf("Rainy");
    break;
  default:
    printf("Invalid Choice!");
  }
  printf("\n");
  return 0;
}