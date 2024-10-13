#include <stdio.h>
#include <stdlib.h>  // For abs() function

int main() {
    int N;
    long long sum = 0;  // To handle large sums

    // Input the number of elements
    scanf("%d", &N);
    
    // Process the array
    for (int i = 0; i < N; i++) {
        int num;
        scanf("%d", &num);
        sum += num;  // Add each number to the sum
    }

    // Print the absolute value of the sum
    printf("%lld\n", llabs(sum));  // Use llabs for long long absolute value

    return 0;
}
