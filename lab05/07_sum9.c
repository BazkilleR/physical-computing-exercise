#include <stdio.h>

int main() {
    int num, sum;

    sum = 0;
    scanf("%d", &num);

    while (num != -9) {
        sum += num;
        scanf("%d", &num);
    }

    printf("%d", sum);

    return 0;
}