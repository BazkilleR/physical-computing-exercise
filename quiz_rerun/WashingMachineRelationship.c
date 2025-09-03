#include <stdio.h>

int main()
{
  int game_count = 0;
  double blood_pool = 2800.0;
  double limit_loss = blood_pool * 0.3, total_blood_loss = 0, blood_loss;

  scanf("%d", &game_count);

  for (int i = 0; i < (int)(game_count / 2); i++)
  {
    blood_loss = 0.02 * blood_pool;
    blood_pool -= blood_loss;
    total_blood_loss += blood_loss;
  }
  if (total_blood_loss >= limit_loss)
  {
    printf("%.2lf\n", total_blood_loss);
    printf("Danger\n");
    return 0;
  }
  else
  {
    printf("%.2lf\n", total_blood_loss);
    printf("Safe\n");
  }

  return 0;
}