#include <stdio.h>
#include <math.h>

int main()
{
  int size1;
  int size2;
  int difference;

  scanf("A%d A%d", &size1, &size2);

  difference = size2 - size1;
  printf("%d\n", (int)pow(2, difference));
  return 0;
}