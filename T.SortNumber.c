#include <stdio.h>
int main()
{
    int a, b, c;
    // Input
    scanf("%d%d%d", &a, &b, &c);

    // Sort the numbers and print them in ascending order
    if (a <= b && a <= c)
    {
        if (b <= c)
        {
            printf("%d\n%d\n%d\n", a, b, c); // a < b < c
        }
        else
        {
            printf("%d\n%d\n%d\n", a, c, b); // a < c < b
        }
    }
    else if (b <= a && b <= c)
    {
        if (a <= c)
        {
            printf("%d\n%d\n%d\n", b, a, c); // b < a < c
        }
        else
        {
            printf("%d\n%d\n%d\n", b, c, a); // b < c < a
        }
    }
    else
    {
        if (a <= b)
        {
            printf("%d\n%d\n%d\n", c, a, b); // c < a < b
        }
        else
        {
            printf("%d\n%d\n%d\n", c, b, a); // c < b < a
        }
    }

    // Print a blank line
    printf("\n");

    // Print the original values
    printf("%d\n%d\n%d\n", a, b, c);

    return 0;
}
