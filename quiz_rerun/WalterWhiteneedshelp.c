#include <stdio.h>

int main()
{
  int start, stop, total = 0;

  scanf("%d %d", &start, &stop);

  printf("pass : ");
  if (start <= stop)
  {
    for (int i = start; i <= stop; i++)
    {
      if (i % 2 == 0)
      {
        printf("%d ", i);
        total += i;
      }
    }
  }
  else
  {
    for (int i = start; i >= stop; i--)
    {
      if (i % 2 == 0)
      {
        printf("%d ", i);
        total += i;
      }
    }
  }

  printf("\nSum : %d", total);

  return 0;
}