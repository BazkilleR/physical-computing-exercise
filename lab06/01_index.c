#include <stdio.h>

int findElement(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;
}

int main() {
    int M[] = {2, 20, 8, 10, 4, 6, 16, 18};
    int N[] = {1, 3, 9, 7, 11, 15, 19};
    int input, indexN, indexM;

    while (1) {
        scanf("%d", &input);

        if (input < 1 || input > 20) {
            continue;
        }

        indexM = findElement(M, sizeof(M)/sizeof(M[0]), input);
        if (indexM != -1) {
            printf("%d is in M at index [%d]\n", input, indexM);
            break;
        }

        indexN = findElement(N, sizeof(N)/sizeof(N[0]), input);
        if (indexN != -1) {
            printf("%d is in N at index [%d]\n", input, indexN);
            break;
        }

        printf("%d is not in neither M nor N\n", input);
        break;
    }

    return 0;
}
