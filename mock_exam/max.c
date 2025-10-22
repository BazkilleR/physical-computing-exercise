
#include <stdio.h>
#include <string.h>
int main()
{
  char option[4];
  int num1, num2, num3, num4, num5;
  scanf("%s", option);
  scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);

  if (strcmp(option, "MAX") == 0)
  {
    int max = num1;
    if (num2 > max)
    {
      max = num2;
    }
    if (num3 > max)
    {
      max = num3;
    }
    if (num4 > max)
    {
      max = num4;
    }
    if (num5 > max)
    {
      max = num5;
    }

    printf("MAX : %d\n", max);
  }
  else if (strcmp(option, "MIN") == 0)
  {
    int min = num1;
    if (num2 < min)
    {
      min = num2;
    }
    if (num3 < min)
    {
      min = num3;
    }
    if (num4 < min)
    {
      min = num4;
    }
    if (num5 < min)
    {
      min = num5;
    }

    printf("MIN : %d\n", min);
  }
  return 0;
}