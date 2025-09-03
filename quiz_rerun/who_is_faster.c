#include <stdio.h>

#define DAYS 7

int read_data(char name[51], int times[DAYS])
{
  int total = 0;
  scanf(" %[^\n]", name);
  for (int i = 0; i < DAYS; i++)
  {
    scanf(" %d", &times[i]);
    total += times[i];
  }
  return total;
}

void compare_days(int t1[DAYS], int t2[DAYS], int *score1, int *score2, int *tie)
{
  *score1 = *score2 = *tie = 0;
  for (int i = 0; i < DAYS; i++)
  {
    if (t1[i] < t2[i])
      (*score1)++;
    else if (t1[i] > t2[i])
      (*score2)++;
    else
      (*tie)++;
  }
}

int main(void)
{
  char name1[51], name2[51];
  int speed1[DAYS], speed2[DAYS];
  int total1 = 0, total2 = 0;
  int first_score = 0, second_score = 0, tie_score = 0;
  double avg1, avg2;

  total1 = read_data(name1, speed1);
  total2 = read_data(name2, speed2);

  avg1 = total1 / (double)DAYS;
  avg2 = total2 / (double)DAYS;

  compare_days(speed1, speed2, &first_score, &second_score, &tie_score);

  printf("%s: %d minutes, average %d minutes/day\n", name1, total1, (int)avg1);
  printf("%s: %d minutes, average %d minutes/day\n", name2, total2, (int)avg2);
  printf("Faster days - %s: %d, %s: %d, Equal: %d\n", name1, first_score, name2, second_score, tie_score);

  return 0;
}
