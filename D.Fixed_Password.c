#include <stdio.h>
int main()
{
    int num;
    int result = 1999;
    while (1)
    {
        scanf("%d", &num);
        if (num == result)
        {
            printf("Correct\n");
            break;
        }
        else
        {
            printf("Wrong\n");
        }
    }
    return 0;
}