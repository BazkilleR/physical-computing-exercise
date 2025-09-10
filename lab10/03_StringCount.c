#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
  char find, str[151];
  int count = 0;

  scanf(" %c", &find);
  scanf(" %150[^\n]", str);

  for (int i = 0; i < strlen(str); i++)
  {
    if (tolower(str[i]) == tolower(find))
    {
      count++;
    }
  }

  printf("%d\n", count);
  return 0;
}