#include <stdio.h>
#include <string.h>

int main()
{
  char str[201];
  scanf(" %200[^\n]", str);

  int len = strlen(str);

  for (int j = 0; j < len - 1; j++)
  {
    for (int i = 0; i < len - j - 1; i++)
    {
      if (str[i] > str[i + 1])
      {
        char temp = str[i];
        str[i] = str[i + 1];
        str[i + 1] = temp;
      }
    }
  }

  printf("%s\n", str);

  return 0;
}
