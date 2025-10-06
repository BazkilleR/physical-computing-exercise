#include <stdio.h>
#include <string.h>

struct Book
{
  char code[10];
  char title[100];
  char writer[100];
};

int main()
{
  int totalBooks;
  char searchCode[10];
  scanf("%d %s", &totalBooks, searchCode);

  struct Book library[totalBooks];

  for (int i = 0; i < totalBooks; i++)
  {
    scanf(" %s", library[i].code);
    scanf(" %s", library[i].title);
    scanf(" %s", library[i].writer);
  }

  for (int i = 0; i < totalBooks; i++)
  {
    if (strcmp(searchCode, library[i].code) == 0)
    {
      printf("%s %s %s", library[i].code, library[i].title, library[i].writer);
      return 0;
    }
  }

  printf("Not Found");
  return 0;
}
