#include <stdio.h>

int main()
{
  char input;

  scanf("%c", &input);
  if (input >= 'a' && input <= 'z')
  {
    input -= 32;
    printf("%c\n", input);
  }
  else if (input >= 'A' && input <= 'Z')
  {
    input += 32;
    printf("%c\n", input);
  }
  else
  {
    printf("error");
  }

  return 0;
}