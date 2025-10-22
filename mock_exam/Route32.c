#include <stdio.h>

int main()
{
  double distance;

  scanf("%lf", &distance);

  if (distance >= 0 && distance < 48.697)
  {
    printf("Ayutthaya\n");
  }
  else if (distance >= 48.697 && distance < 66.456)
  {
    printf("Ang Thong\n");
  }
  else if (distance >= 66.456 && distance < 84.918)
  {
    printf("Sing Buri\n");
  }
  else if (distance >= 84.918 && distance < 85.900)
  {
    printf("Lop Buri\n");
  }
  else if (distance >= 85.900 && distance < 111.936)
  {
    printf("Sing Buri\n");
  }
  else if (distance >= 111.936 && distance < 150.019)
  {
    printf("Chai Nat\n");
  }
  else if (distance >= 150.019 && distance <= 150.545)
  {
    printf("Nakhon Sawan\n");
  }
  else
  {
    printf("InValid\n");
  }
  return 0;
}