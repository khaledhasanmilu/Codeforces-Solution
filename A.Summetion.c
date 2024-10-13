#include <stdio.h>
#include<stdlib.h>
int main()
{
    int N;
    long long sum = 0;
    scanf("%d", &N);
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }
    printf("%lld\n", llabs(sum));

    return 0;
}