#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int count = 1;
    int min = arr[0];
    for (int i = 1; i < n; i++) { 
        if (arr[i] < min) {
            min = arr[i];
            count=1;
            continue;
        }
        if (min == arr[i])
        {
            count++;
        }
        
    }
if (count%2==0)
{
    printf("Unlucky\n");
}
else
{
    printf("Lucky\n");
}
    return 0;
}
