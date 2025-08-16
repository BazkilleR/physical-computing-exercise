#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846

double calcHeight(int angleDeg, int velocity);

int main(void)
{
  int angleDeg, velocity;

  scanf("%d %d", &angleDeg, &velocity);

  printf("theta (degree) : %d\n", angleDeg);
  printf("u (m/s) : %d\n", velocity);
  printf("h (m) : %.4f\n", calcHeight(angleDeg, velocity));

  return 0;
}

double calcHeight(int angleDeg, int velocity)
{
  const double g = 9.81;
  double angleRad = angleDeg * PI / 180.0;
  double sinTheta = sin(angleRad);

  return (velocity * velocity * sinTheta * sinTheta) / (2 * g);
}
