#include <stdio.h>
#include <ctype.h>

int main()
{
  char size;

  scanf(" %c", &size);
  size = tolower(size);

  if (size == 's')
  {
    printf("Soft\n");
  }
  else if (size == 'm')
  {
    printf("Medium\n");
  }
  else if (size == 'h')
  {
    printf("Hard\n");
  }
  else if (size == 'i')
  {
    printf("Intermediate\n");
  }
  else if (size == 'w')
  {
    printf("Wet\n");
  }
}