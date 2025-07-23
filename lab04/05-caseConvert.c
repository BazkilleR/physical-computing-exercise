#include <stdio.h>

int main() {
    char text;

    scanf("%c", &text);

    if (text >= 'a' && text <= 'z') {
        text -= 32;
        printf("%c", text);
    } else if (text >= 'A' && text <= 'Z') {
        text += 32;
        printf("%c", text);
    } else {
        printf("error");
    }

    return 0;
}