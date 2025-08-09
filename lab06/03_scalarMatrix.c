#include <stdio.h>

int main() {
    float matrix[3][3];
    int isScalar = 1;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%f", &matrix[i][j]);
        }
    }

    float scalarValue = matrix[0][0];

    for (int i = 0; i < 3 && isScalar; i++) {
        for (int j = 0; j < 3; j++) {
            if (i == j) {
                if (matrix[i][j] != scalarValue) {
                    isScalar = 0;
                    break;
                }
            } else {
                if (matrix[i][j] != 0) {
                    isScalar = 0;
                    break;
                }
            }
        }
    }

    if (isScalar) {
        printf("This is a scalar matrix\n");
    } else {
        printf("This is not a scalar matrix\n");
    }

    return 0;
}
