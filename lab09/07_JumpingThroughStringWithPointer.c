#include <stdio.h>
#include <stdlib.h>

int main() {
    char *str = NULL;
    int len_string = 0, m = 1;

    scanf(" %d", &len_string);
    scanf(" %d", &m);

    str = (char *)malloc((len_string + 1) * sizeof(char));
    if (str == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    scanf(" %[^\n]", str);

    for (int i = 0; i < len_string; i+=m) {
        printf("%c", *(str + i));
    }

    printf("\n");
    free(str);
    return 0;
}