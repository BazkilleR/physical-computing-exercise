#include <stdio.h>

int main() {
    int count;

    scanf("%d", &count);

    do {
        printf("%d ", count);
        count--;
    } while (count >= 1);

    return 0;
}