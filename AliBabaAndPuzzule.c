#include <stdio.h>
int main()
{
    int a, b, c, d;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    if (a + b + c == d ||
        a + b - c == d ||
        a + b * c == d ||
        a - b + c == d ||
        a - b - c == d ||
        a - b * c == d ||
        a * b + c == d ||
        a * b - c == d ||
        a * b * c == d ||
        a + c - b == d ||
        a + c * b == d ||
        a - c + b == d ||
        a - c * b == d ||
        a * c + b == d ||
        a * c - b == d ||
        b + a + c == d ||
        b + a - c == d ||
        b + a * c == d ||
        b - a + c == d ||
        b - a - c == d ||
        b - a * c == d ||
        b * a + c == d ||
        b * a - c == d ||
        b * a * c == d ||
        b + c - a == d ||
        b + c * a == d ||
        b - c + a == d ||
        b - c * a == d ||
        b * c + a == d ||
        b * c - a == d ||
        c + a + b == d ||
        c + a - b == d ||
        c + a * b == d ||
        c - a + b == d ||
        c - a - b == d ||
        c - a * b == d ||
        c * a + b == d ||
        c * a - b == d ||
        c * a * b == d ||
        c + b - a == d ||
        c + b * a == d ||
        c - b + a == d ||
        c - b * a == d ||
        c * b + a == d ||
        c * b - a == d)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}
/*

*/