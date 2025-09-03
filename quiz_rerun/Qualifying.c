#include <stdio.h>

int main()
{
  char name1[36], name2[36], name3[36];
  float time1, time2, time3;

  scanf("%f %[^\n]", &time1, name1);
  scanf("%f %[^\n]", &time2, name2);
  scanf("%f %[^\n]", &time3, name3);

  if (time1 <= time2 && time1 <= time3)
  {
    printf("%s is Fastest : %.3f\n", name1, time1);
  }
  else if (time2 <= time1 && time2 <= time3)
  {
    printf("%s is Fastest : %.3f\n", name2, time2);
  }
  else
  {
    printf("%s is Fastest : %.3f\n", name3, time3);
  }

  return 0;
}