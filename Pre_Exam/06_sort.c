#include <stdio.h>

int main() {
    int n, is_float = 0;
    scanf("%d", &n);
    
    double arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%lf", &arr[i]);
    }
    
    // Bubble sort
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-1-i; j++) {
            if(arr[j] > arr[j+1]) {
                double temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    for(int i = 0; i < n; i++) {
        if(arr[i] != (int)arr[i]) {
            is_float = 1;
            break;
        }
    }

    for(int i = 0; i < n; i++) {
        if(is_float == 1) {
            printf("%.2lf ", arr[i]);
        } else {
            printf("%d ", (int)arr[i]);
        }
    }

    return 0;
}
