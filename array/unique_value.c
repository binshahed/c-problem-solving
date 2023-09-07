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
    int result = 1;
    for (int i = 1; i < num; i++)
    {
        if (arr[0] != arr[i])
        {
            result = 0;
            break;
        }
    }
    if (result)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }

    return 0;
}