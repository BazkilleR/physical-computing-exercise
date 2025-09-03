#include <stdio.h>

int main()
{
  int m, n;

  scanf("%d %d", &m, &n);

  for (int i = 1; i <= n; i++)
  {
    printf("%d x %d = %d\n", m, i, i * m);
  }

  return 0;
}