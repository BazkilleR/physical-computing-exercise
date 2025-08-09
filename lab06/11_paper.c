#include <stdio.h>
#include <math.h>

int main()
{
  int x, y;

  scanf(" A%d", &x);
  scanf(" A%d", &y);

  printf("%d\n", (int)pow(2, y - x));

  return 0;
}