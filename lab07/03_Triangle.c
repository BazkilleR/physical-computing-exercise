#include <stdio.h>
#include <math.h>

double perimeter(double base, double height);
double area(double base, double height);

int main()
{
  double base, height;
  scanf("%lf %lf", &base, &height);
  printf("Perimeter: %.2lf\n", perimeter(base, height));
  printf("Area: %.2lf\n", area(base, height));
  return 0;
}

double perimeter(double base, double height)
{
  return base + height + sqrt(base * base + height * height);
}

double area(double base, double height)
{
  return 0.5 * base * height;
}