#include <stdio.h>

int main() {
    char text;

    scanf("%c", &text);

    if (text >= 'a' && text <= 'z') {
        printf("lowercase");
    } else if (text >= 'A' && text <= 'Z') {
        printf("uppercase", text);
    } else if (text >= '0' && text <= '9') {
        printf("number", text);
    } else {
        printf("error");
    }

    return 0;
}