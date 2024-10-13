#include <stdio.h>

int main() {
    int n, searchValue, flag = 0;

    // Read the number of elements
    scanf("%d", &n);
    int arr[n];

    // Read the array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Read the search value
    printf("Enter Search Value: ");
    scanf("%d", &searchValue);

    // Search for the value
    for (int i = 0; i < n; i++) {
        if (arr[i] == searchValue) {
            printf("Value %d found at index %d\n", searchValue, i);
            flag = 1;  // Mark that the value was found
            break;  // Exit the loop once the value is found
        }
    }

    // If the value wasn't found, print -1
    if (flag == 0) {
        printf("-1\n");
    }

    return 0;
}
