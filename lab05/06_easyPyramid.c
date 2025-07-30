#include <stdio.h>

int main() {
    int rows_count, star_count;

    scanf("%d", &rows_count);

    star_count = 1;

    // level
    for (int i = 1; i <= rows_count; i++) {
        // space
        for (int j = rows_count - i; j > 0; j--) {
            printf(" ");
        }

        // star
        for (int k = 1; k <= star_count; k+=1) {
            printf("*");
        }

        star_count += 2;
        printf("\n");
    }

    return 0;
}