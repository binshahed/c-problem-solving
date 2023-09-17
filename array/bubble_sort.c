#include <stdio.h>

int main()
{
    int temp, arr[8] = {23, 17, 5, 9, 2, 29, 10, 7};

    for (int i = 0; i < 8; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    for (int j = 0; j < 7; j++)
    {
        /* code */
        for (int i = 0; i < 8 - 1; i++)
        {

            /* code */
            if (arr[i] > arr[i + 1])
            {
                /* code */
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }

    for (int i = 0; i < 8; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
