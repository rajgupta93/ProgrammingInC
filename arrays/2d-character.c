#include <stdio.h>

int main()
{

  int i;
  char users[][100] = {
      "John Doe",
      "Jane",
      "Dave"};

  for (i = 0; i < 3; i++)
    printf("%s\n", users[i]);

  return 0;
}