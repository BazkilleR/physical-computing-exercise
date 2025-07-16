#include <stdio.h>

int main() {
    float price, diameter, height, r;
    float volumn, bahtPerMl;
    float pi = 3.14159265359;

    scanf("%f", &price);
    scanf("%f", &diameter);
    scanf("%f", &height);

    r = diameter / 2;

    volumn = height * pi * (r * r);
    bahtPerMl = price / volumn;

    printf("Volume : %.2fml\n", volumn);
    printf("Baht/ml : %.4f\n", bahtPerMl);

    return 0;
}
