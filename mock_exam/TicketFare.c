#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n, a, b, c, d, e, f, g; // n = จำนวนสถานีทั้งหมด
  int fare = 0;               // ค่าโดยสาร

  // รับค่าทั้งหมด 8 ตัว
  // n a b c d e f g
  scanf("%d %d %d %d %d %d %d %d", &n, &a, &b, &c, &d, &e, &f, &g);

  // ตรวจว่าหมายเลขสถานีอยู่ในขอบเขตหรือไม่
  if (f > n || g > n || f < 1 || g < 1)
  {
    printf("Error\n");
    return 0;
  }

  int run = abs(g - f); // ระยะทางระหว่างสถานีต้นทางและปลายทาง

  if (run <= a)
  {
    fare = b;
  }
  else
  {
    run -= a;
    fare = b;

    if (run <= c)
    {
      fare += d * run;
    }
    else
    {
      run -= c;
      fare += d * c;
      fare += e * run;
    }
  }

  printf("%d\n", fare);
  return 0;
}
