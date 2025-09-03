#include <stdio.h>
#include <stdlib.h>

int main() {
    char *str = NULL;
    int size = 101;
    int count_str = 0;

    str = (char *)malloc(size * sizeof(char));
    if (str == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    scanf("%[^\n]", str);
    for (int i = 0; *(str + i) != '\0'; i++) {
        count_str++;
    }

    char *ptr = str + count_str - 1;
    while (ptr >= str) {
        printf("%c", *ptr);
        ptr--;
    }
    printf("\n");

    free(str);

    return 0;
}
