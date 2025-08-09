#include <stdio.h>
#include <ctype.h>

int main() {
    char str[301];
    char ch;
    int count = 0;

    scanf(" %[^\n]", str);
    scanf(" %c", &ch);

    ch = tolower(ch);

    for (int i = 0; str[i] != '\0'; i++) {
        if (tolower(str[i]) == ch) {
            count++;
        }
    }

    if (count == 0) {
        printf("Not found.\n");
    } else {
        printf("There is/are %d \"%c\" in the above sentences.\n", count, ch);
        printf("Position:");
        int found = 0;
        for (int i = 0; str[i] != '\0'; i++) {
            if (tolower(str[i]) == ch) {
                if (found) printf(",");
                printf(" %d", i + 1);
                found = 1;
            }
        }
        printf("\n");
    }

    return 0;
}
