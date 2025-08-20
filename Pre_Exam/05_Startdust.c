#include <stdio.h>
#include <math.h>

// Quick Sort functions
void quick_sort(float arr[], int low, int high);
int partition(float arr[], int low, int high);

// Partition function
int partition(float arr[], int low, int high) {
    float pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            // swap arr[i] and arr[j]
            float temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    // swap arr[i+1] and arr[high] (pivot)
    float temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;

    return i + 1;
}

// Recursive Quick Sort
void quick_sort(float arr[], int low, int high) {
    if (low < high) {
        int pivot_index = partition(arr, low, high);
        quick_sort(arr, low, pivot_index - 1);
        quick_sort(arr, pivot_index + 1, high);
    }
}

int main() {
    int count;
    scanf("%d", &count);

    float num_list[count];
    float total = 0.0;

    for (int i = 0; i < count; i++) {
        scanf("%f", &num_list[i]);
        total += num_list[i];
    }

    // Sort the array using Quick Sort
    quick_sort(num_list, 0, count - 1);

    // Mean
    float mean = total / count;

    // Median
    float median;
    if (count % 2 == 0) {
        median = (num_list[count / 2 - 1] + num_list[count / 2]) / 2.0;
    } else {
        median = num_list[count / 2];
    }

    // Standard Deviation (Population)
    float sum_sq_diff = 0.0;
    for (int i = 0; i < count; i++) {
        float diff = num_list[i] - mean;
        sum_sq_diff += diff * diff;
    }

    float std = sqrt(sum_sq_diff / count);

    // Output
    printf("%.2f\n", mean);
    printf("%.2f\n", median);
    printf("%.2f\n", std);

    return 0;
}
