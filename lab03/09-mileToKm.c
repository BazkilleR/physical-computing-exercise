#include <stdio.h>

int main() {
    float mile_hr, km_hr;
    float mile_to_km = 1.60934;

    scanf("%f", &mile_hr);

    km_hr = mile_hr * mile_to_km;

    printf("%.2f\n", km_hr);

    return 0;
}
