#include <stdio.h>

int main() {
    float height, weight, bmi;

    scanf("%f", &height);
    scanf("%f", &weight);

    height /= 100;
    bmi = weight / (height * height);

    printf("%f\n", bmi);

    return 0;
}
