#include <stdio.h>
#include <string.h>

int main()
{

  char user1[] = {'J', 'o', 'h', 'n', ' ', 'D', 'o', 'e', '\0'};
  char user2[] = "Jane Doe";

  char string[100];
  strcpy(string, user2);

  printf("%s", &user1[0]);
  printf("%s", user1);

  printf("%s", &user2[0]);
  printf("%s", user2);

  printf("string -- %s", string);

  return 0;
}