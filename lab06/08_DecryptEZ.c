#include <stdio.h>

int main()
{
  char charArr[26] = {'a', 'i', 'w', 'g', 'z', 'v', 'f', 'u', 't', 'h', 's', 'o', 'j', 'l', 'k', 'd', 'e', 'c', 'n', 'm', 'r', 'q', 'p', 'y', 'x', 'b'};
  char inputChar[200];

  scanf("%[^\n]", inputChar);

  for (int i = 0; inputChar[i] != '\0'; i++)
  {
    if (inputChar[i] >= 'A' && inputChar[i] <= 'Z')
    {
      inputChar[i] += 32;

      for (int j = 0; j < 26; j++)
      {
        if (inputChar[i] == charArr[j])
        {
          if (j - 5 < 0)
          {
            inputChar[i] = charArr[j - 5 + 26];
          }
          else
          {
            inputChar[i] = charArr[j - 5];
          }
          inputChar[i] -= 32;
          break;
        }
      }
    }
    else if (inputChar[i] >= 'a' && inputChar[i] <= 'z')
    {
      for (int j = 0; j < 26; j++)
      {
        if (inputChar[i] == charArr[j])
        {
          if (j - 5 < 0)
          {
            inputChar[i] = charArr[j - 5 + 26];
          }
          else
          {
            inputChar[i] = charArr[j - 5];
          }
          break;
        }
      }
    }
  }

  printf("%s\n", inputChar);

  return 0;
}