#include <stdio.h>

int main()
{

  int dayNumber;

  printf("Enter day number: ");
  scanf("%d", &dayNumber);

  // if (dayNumber == 0)
  //   printf("Sunday");
  // else if (dayNumber == 1)
  //   printf("Monday");
  // else if (dayNumber == 2)
  //   printf("Tuesday");
  // else if (dayNumber == 3)
  //   printf("Wednesday");
  // else if (dayNumber == 4)
  //   printf("Thursday");
  // else if (dayNumber == 5)
  //   printf("Friday");
  // else if (dayNumber == 6)
  //   printf("Saturday");
  // else
  //   printf("Invalid day number");

  switch (dayNumber)
  {
  case 0:
    printf("Sunday");
    break;
  case 1:
    printf("Monday");
    break;
  case 2:
    printf("Tuesday");
    break;
  case 3:
    printf("Wednesday");
    break;
  case 4:
    printf("Thursday");
    break;
  case 5:
    printf("Friday");
    break;
  case 6:
    printf("Saturday");
    break;
  default:
    printf("Invalid day number");
  }
  printf("\n");
  return 0;
}