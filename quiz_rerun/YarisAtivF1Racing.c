#include <stdio.h>

int main(void)
{
  int is_safe, round, safety_car_round, error_count = 0;
  float distance_from_front_car;

  scanf("%d", &is_safe);
  scanf("%f", &distance_from_front_car);
  scanf("%d", &round);
  scanf("%d", &safety_car_round);

  if (!is_safe)
    error_count++;

  if (round <= 2)
    error_count++;

  if (round - safety_car_round < 2)
    error_count++;

  if (distance_from_front_car >= 1.0)
    error_count++;

  if (error_count == 0)
  {
    printf("DRS allowed\n");
  }
  else
  {
    printf("DRS not allowed %d\n", error_count);
  }
  return 0;
}
