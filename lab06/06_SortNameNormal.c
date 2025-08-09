#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_STUDENTS 20
#define MAX_LEN 61

void formatWord(char *word)
{
  int len = strlen(word);
  for (int i = 0; i < len; i++)
  {
    if (i == 0)
      word[i] = toupper(word[i]);
    else
      word[i] = tolower(word[i]);
  }
}

int main()
{
  char first[MAX_LEN], last[MAX_LEN];
  char names[MAX_STUDENTS][MAX_LEN * 2];

  for (int i = 0; i < MAX_STUDENTS; i++)
  {
    scanf("%s %s", first, last);

    formatWord(first);
    formatWord(last);

    sprintf(names[i], "%s %s", first, last);
  }

  for (int i = 0; i < MAX_STUDENTS - 1; i++)
  {
    for (int j = i + 1; j < MAX_STUDENTS; j++)
    {
      if (strcmp(names[i], names[j]) > 0)
      {
        char temp[MAX_LEN * 2];
        strcpy(temp, names[i]);
        strcpy(names[i], names[j]);
        strcpy(names[j], temp);
      }
    }
  }

  for (int i = 0; i < MAX_STUDENTS; i++)
  {
    printf("%s\n", names[i]);
  }

  return 0;
}
