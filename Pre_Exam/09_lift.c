#include <stdio.h>

int main() {
    int person_amount,age, status = 1;
    float max_weight, weight, total = 0;

    scanf("%d", &person_amount);
    scanf("%f", &max_weight);
    int age_list[person_amount];

    if (person_amount == 0) {
        printf("Safe");
        return 0;
    }

    for (int i = 0; i < person_amount; i++) {
        scanf("%d", &age);
        scanf("%f", &weight);
        age_list[i] = age;
        total += weight;
    }

    if (total > max_weight) {
        printf("Not Safe");
        return 0;
    }

    for (int i = 0; i < person_amount; i++) {
        if (age_list[i] >= 12) {
            printf("Safe");
            return 0;
        }
    }
    printf("Not Safe");
    return 0;
}