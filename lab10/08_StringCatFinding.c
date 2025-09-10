#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
  char str[2001];
  int foundCount = 0;

  scanf(" %2000[^\n]", str);

  int len = strlen(str);

  for (int i = 0; i < len - 2; i++)
  {
    if (tolower(str[i]) == 'c' &&
        tolower(str[i + 1]) == 'a' &&
        tolower(str[i + 2]) == 't')
    {
      if (foundCount == 0)
        printf("%d", i);
      else
        printf(", %d", i);

      foundCount++;
    }
  }

  printf("\n");
  return 0;
}
