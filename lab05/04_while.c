#include <stdio.h>

int main() {
    int count, i;

    scanf("%d", &count);

    i = 1;
    while (i <= count) {
        printf("%d ", i);
        i++;
    }

    return 0;
}