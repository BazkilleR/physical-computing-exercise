#include <stdio.h>
#include <stdbool.h>

int main() {
    float age, height, weight;
    float sum_age = 0, sum_height = 0, sum_weight = 0;
    int filter1_count = 0, filter2_count = 0, filter3_count = 0, filter4_count = 0;

    for (int i = 0; i < 50; i++) {
        scanf("%f %f %f", &age, &height, &weight);

        if (age >= 20 && height >= 160) {
            filter1_count++;
        }
        if (age < 20 && (height <= 180 || weight >= 60)) {
            filter2_count++;
        }
        if (age >= 30 && (weight >= 40 && weight <= 80)) {
            filter3_count++;
        }
        if (age < 40 && (weight < 85 || height <= 200)) {
            filter4_count++;
        }

        sum_age += age;
        sum_height += height;
        sum_weight += weight;
    }

    printf("Age >= 20 and Height >= 160: %d\n", filter1_count);
    printf("Age < 20 and Height <= 180 or Weight >= 60: %d\n", filter2_count);
    printf("Age >= 30 and Weight >= 40 and Weight <= 80: %d\n", filter3_count);
    printf("Age < 40 and Weight < 85 or Height <= 200: %d\n", filter4_count);
    printf("Average Age: %.0f\n", sum_age / 50);
    printf("Average Height: %.2f\n", sum_height / 50);
    printf("Average Weight: %.2f\n", sum_weight / 50);

    return 0;
}
