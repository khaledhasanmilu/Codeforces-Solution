#include <stdio.h>
int main()
{
    int n;
    // int flag = 0;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int searchValue, res = 0;
    // printf("Enter Search Value: ");
    scanf("%d", &searchValue);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == searchValue)
        {
            // printf("%d\n",i);
            // flag = 1;
            // break;
            printf("%d\n", i);
            res = 1;
            break;
        }
    }
    /*if (flag==0)
    {
        printf("-1\n");
    }
    */
    if (!res)
    {
        printf("-1\n");
    }

    return 0;
}