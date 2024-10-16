#include <stdio.h>
int main()
{
    int A, B, result;
    char S;
    scanf("%d %c %d", &A, &S, &B);
    if (S == '>')
    {
        if (A > B)
        {
            printf("Right\n");
        }
        else
        {
            printf("Wrong\n");
        }
    }
    else if (S == '<')
    {
        if (A < B)
        {
            printf("Right\n");
        }
        else
        {
            printf("Wrong\n");
        }
    }
    else if (S == '=')
    {
        if (A == B)
        {
            printf("Right\n");
        }
        else
        {
            printf("Wrong\n");
        }
    }

    return 0;
}