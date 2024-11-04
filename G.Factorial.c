#include <stdio.h>
int main()
{
    int num;
    scanf("%d", &num);

    while (num--)
    {
        int n;
        unsigned long long int fact = 1;
        scanf("%d", &n);
        for (int i = 1; i <= n; i++)
        {
            fact *= i;
        }
        printf("%llu\n", fact);
    }
    return 0;
}