#include <stdio.h>

int main() {
    float num1, num2, num3;

    scanf("%f %f %f", &num1, &num2, &num3);

    // Case 1: num1 is the middle
    if ((num1 >= num2 && num1 <= num3) || (num1 <= num2 && num1 >= num3)) {
        printf("%.2f\n", num1);
    }
    // Case 2: num2 is the middle
    else if ((num2 >= num1 && num2 <= num3) || (num2 <= num1 && num2 >= num3)) {
        printf("%.2f\n", num2);
    }
    // Case 3: num3 is the middle
    else {
        printf("%.2f\n", num3);
    }

    return 0;
}
