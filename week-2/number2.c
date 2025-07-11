#include <stdio.h>

int main() {
    char number[6];
    scanf("%s", number);

    char d1 = number[0];
    char d2 = number[1];
    char d3 = number[2];
    char d4 = number[3];
    char d5 = number[4];

    int i;

    printf("%c", d1);
    i = 0;
    while (i < 80) {
        putchar(32);
        i++;
    }

    printf("%c%c", d1, d2);
    i = 0;
    while (i < 79) {
        putchar(32);
        i++;
    }

    printf("%c%c%c", d1, d2, d3);
    i = 0;
    while (i < 78) {
        putchar(32);
        i++;
    }

    printf("%c%c%c%c", d1, d2, d3, d4);
    i = 0;
    while (i < 77) {
        putchar(32);
        i++;
    }

    printf("%c%c%c%c%c", d1, d2, d3, d4, d5);

    return 0;
}
