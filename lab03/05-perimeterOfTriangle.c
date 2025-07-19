#include <stdio.h>

int main() {
    float width, height, result;

    scanf("%f", &width);
    scanf("%f", &height);

    result = (width * 2) + (height * 2);
    printf("Perimeter of rectangle = %.4f units", result);

    return 0;
}