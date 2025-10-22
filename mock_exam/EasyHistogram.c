#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
  char text[1000];
  int count[256] = {0};

  scanf("%[^\n]", text);

  for (int i = 0; i < strlen(text); i++)
  {
    char ch = text[i];
    if (isalpha(ch))
      count[ch]++;
  }

  for (char c = 'a'; c <= 'z'; c++)
  {
    if (count[c] > 0)
      printf("%c = %d\n", c, count[c]);
    if (count[toupper(c)] > 0)
      printf("%c = %d\n", toupper(c), count[toupper(c)]);
  }

  return 0;
}
