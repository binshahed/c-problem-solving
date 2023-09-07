#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);
    int arr[num];

    for (int i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }

    int sum = 0;

    for (int i = 0; i < num; i++)
    {
        if (arr[i] % 2 == 1)
        {
            sum = sum + arr[i];
        }
    }

    if (sum % 2 == 0)
    {
        printf("YES %d", sum);
    }
    else
    {
        printf("no %d", sum);
    }

    return 0;
}