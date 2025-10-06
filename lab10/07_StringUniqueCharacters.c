#include <stdio.h>
#include <string.h>

int main()
{
  char inputText[101];
  scanf("%[^\n]", inputText);

  while (1)
  {
    char filteredText[101];
    int pos = 0;
    int hasChange = 0;

    for (int i = 0; inputText[i] != '\0'; i++)
    {
      if (inputText[i] == inputText[i + 1])
      {
        i++;           // ข้ามตัวที่ซ้ำ
        hasChange = 1; // มีการเปลี่ยนแปลง
      }
      else
      {
        filteredText[pos++] = inputText[i];
      }
    }

    filteredText[pos] = '\0';

    if (hasChange)
    {
      printf("%s\n", filteredText);
      strcpy(inputText, filteredText);
    }
    else
    {
      break;
    }
  }

  return 0;
}
