#include <stdio.h>
#include <math.h>

void calculateAndPrint(double x, double y)
{
  printf("sqrt(%.0f^2+%.0f^2)=%.2f\n", x, y, sqrt((x * x) + (y * y)));
}

int main()
{
  double x, y;
  scanf("%lf %lf", &x, &y);
  calculateAndPrint(x, y);

  return 0;
}