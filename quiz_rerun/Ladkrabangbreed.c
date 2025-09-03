#include <stdio.h>
#include <math.h>
#include <string.h>
#define NANO 6.6
#define TOH 5.5
#define MICKY 5.5

int find_refill(double total, char name[])
{
  if (strcmp(name, "Mickey") == 0)
    return (int)ceil(total / MICKY);
  else if (strcmp(name, "Nano") == 0)
    return (int)ceil(total / NANO);
  else if (strcmp(name, "Toh") == 0)
    return (int)ceil(total / TOH);
  return 0;
}

int main()
{
  int day_count;
  char name1[51], name2[51], name3[51];
  double num1, num2, num3, total1, total2, total3;
  double refill1 = 0, refill2 = 0, refill3 = 0;

  scanf("%d", &day_count);

  if (day_count < 1 || day_count > 7)
    return 0;

  scanf("%s %s %s", name1, name2, name3);

  for (int i = 0; i < day_count; i++)
  {
    scanf("%lf %lf %lf", &num1, &num2, &num3);
    total1 += num1;
    total2 += num2;
    total3 += num3;
  }

  printf("%s: %d refills\n", name1, find_refill(total1, name1));
  printf("%s: %d refills\n", name2, find_refill(total2, name2));
  printf("%s: %d refills\n", name3, find_refill(total3, name3));

  return 0;
}