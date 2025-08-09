#include <stdio.h>
#include <ctype.h>

int main()
{
  int count;
  scanf("%d", &count);
  char str[count], char_not_dup[count];

  for (int i = 0; i < count; i++)
  {
    scanf(" %c", &str[i]);
    str[i] = tolower(str[i]);
  }

  return 0;
}
