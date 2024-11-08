#include <stdio.h>
int swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("%d %d", *a, *b);
}

int main()
{
    int x, y;
    scanf("%d%d", &x, &y);
    swap(&x, &y);

    return 0;
}