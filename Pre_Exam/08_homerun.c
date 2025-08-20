#include <stdio.h>

int main() {
    int total_homerun = 0, count;
    double player, num;

    scanf("%d", &count);
    scanf("%lf", &player);

    for (int i = 0; i < count; i++) {
        scanf("%lf", &num);
        if (player > num) {
            total_homerun++;
        }
    }

    printf("%d", total_homerun);

    return 0;
}