#include <stdio.h>
#include <ctype.h>

int main()
{
  char str[100];
  int left = 0, right = 0, length = 0;

  scanf("%s", str);

  while (str[length] != '\0')
  {
    length++;
  }
  right = length - 1;

  while (left != right)
  {
    if (tolower(str[left]) != tolower(str[right]))
    {
      printf("It is not Palindrome.\n");
      return 0;
    }
    left++;
    right--;
  }
  printf("It is Palindrome.\n");
  return 0;
}