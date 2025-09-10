#include <stdio.h>

int main()
{
  char firstName[101], lastName[101];

  scanf("%100s %100s", firstName, lastName);
  printf("%c.%c.\n", firstName[0], lastName[0]);
  return 0;
}