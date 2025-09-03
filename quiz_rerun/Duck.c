#include <stdio.h>

int main()
{
  int count;

  scanf("%d", &count);

  if (count == 0)
  {
    printf("Duck Type: Silent Duck\n");
  }
  else if (count >= 1 && count <= 10)
  {
    printf("Duck Type: Chill Duck\n");
  }
  else if (count >= 11 && count <= 50)
  {
    printf("Duck Type: Happy Duck\n");
  }
  else if (count > 50)
  {
    printf("Duck Type: Talkative Duck\n");
  }
  else
  {
    printf("Error");
  }
}