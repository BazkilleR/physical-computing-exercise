#include <stdio.h>

int main() {
    int count, i;

    scanf("%d", &count);

    if (count >= 0) {
        for (i = count; i >= 0; i--) {
            printf("%d ", i);
        }
    } else if (count < 0) {
        for (i = count; i <= 0; i++) {
            printf("%d ", i);
        }
    }

    return 0;
}