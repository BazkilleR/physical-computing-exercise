#include <stdio.h>
#include <ctype.h>

double celsiusToFahrenheit(double celsius);
double fahrenheitToCelsius(double fahrenheit);
void printFahrenheit(double fahrenheit);
void printCelsius(double celsius);

int main()
{
  double temp;
  char unit;
  scanf("%lf %c", &temp, &unit);
  unit = tolower(unit);

  if (unit == 'c')
  {
    printFahrenheit(celsiusToFahrenheit(temp));
  }
  else if (unit == 'f')
  {
    printCelsius(fahrenheitToCelsius(temp));
  }

  return 0;
}

double celsiusToFahrenheit(double celsius)
{
  return 32.0 + (celsius * (9.0 / 5.0));
}

double fahrenheitToCelsius(double fahrenheit)
{
  return (fahrenheit - 32.0) * 5.0 / 9.0;
}

void printFahrenheit(double fahrenheit)
{
  printf("%.2lf f", fahrenheit);
}

void printCelsius(double celsius)
{
  printf("%.2lf c", celsius);
}
