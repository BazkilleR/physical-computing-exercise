#include <stdio.h>

int main() {
    double a, b;
    double sum, diff, prod, quot;

    scanf("%lf,%lf", &a, &b);

    sum = a + b;
    diff = a - b;
    prod = a * b;

    if (b != 0)
        quot = a / b;
    else {
        quot = 0;
    }

    printf("The sum of the given numbers : %f\n", sum);
    printf("The difference of the given numbers : %f\n", diff);
    printf("The product of the given numbers : %f\n", prod);
    printf("The quotient of the given numbers : %f", quot);

    return 0;
}
