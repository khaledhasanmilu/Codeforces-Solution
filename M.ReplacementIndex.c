#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int min = arr[0], max = arr[0];
    int min_indx = 0, max_indx = 0;  // Initialize indices to 0

    for (int i = 1; i < n; i++) { // Start from 1 since we initialized with arr[0]
        if (arr[i] < min) {
            min = arr[i];
            min_indx = i;
        }
        if (arr[i] > max) {
            max = arr[i];
            max_indx = i;
        }
    }

    int swap = arr[min_indx];
    arr[min_indx] = arr[max_indx];
    arr[max_indx] = swap;

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
