#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int num = n / 10; // 87/10=8   87%10=7
    int num2 = n % 10;
    if (n < 10 || n > 99)
    {
        return -1;
    }

    else if (num2 != 0 &&num % num2 == 0 || num != 0 && num2 % num == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}