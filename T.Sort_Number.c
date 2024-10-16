#include <stdio.h>

void sort(int arr[], int n) {
    int temp;
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                // Swap
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int A, B, C;
    int sorted[3];
    scanf("%d %d %d", &A, &B, &C);

    sorted[0] = A;
    sorted[1] = B;
    sorted[2] = C;

   
    sort(sorted, 3);


    for (int i = 0; i < 3; i++) {
        printf("%d\n", sorted[i]);
    }

    printf("\n");

    printf("%d\n%d\n%d\n", A, B, C);

    return 0;
}
