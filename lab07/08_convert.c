#include <stdio.h>
#include <string.h>
#include <ctype.h>

void convertName(char name[])
{
  for (int i = 0; name[i] != '\0'; i++)
  {
    unsigned char ch = (unsigned char)name[i];
    if (islower(ch))
      name[i] = (char)toupper(ch);
    else if (isupper(ch))
      name[i] = (char)tolower(ch);
  }
}

int strcmp_ignore_case(const char s1[], const char s2[])
{
  int i = 0;
  while (s1[i] != '\0' || s2[i] != '\0')
  {
    unsigned char c1 = (unsigned char)tolower((unsigned char)s1[i]);
    unsigned char c2 = (unsigned char)tolower((unsigned char)s2[i]);
    if (c1 != c2)
      return (int)c1 - (int)c2;
    i++;
  }
  return 0;
}

int main(void)
{
  char name1[101], name2[101];

  scanf(" %[^\n]", name1);
  scanf(" %[^\n]", name2);

  convertName(name1);
  convertName(name2);

  printf("*** Results ***\n");
  printf("%s\n", name1);
  printf("%s\n", name2);
  printf("***************\n");

  if (strcmp_ignore_case(name1, name2) == 0)
  {
    printf("Both strings are the same.\n");
  }
  else
  {
    printf("Both strings are not the same.\n");
  }
  return 0;
}
