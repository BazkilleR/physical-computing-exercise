#include <stdio.h>

int main() {
    int number;

    scanf("%d", &number);

    int d1 = number / 10000;
    int d2 = (number / 1000) % 10;
    int d3 = (number / 100) % 10;
    int d4 = (number / 10) % 10;
    int d5 = number % 10;

    printf("%d%d%d%d%d", d3, d4, d5, d1, d2);

    return 0;
}
