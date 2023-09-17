#include <stdio.h>

int main()
{
    int arr[8] = {23, 17, 5, 9, 2, 29, 10, 7};

    int i, j, newarr[8];

    for (j = 0; j < 8; j++)
    {
        int min = arr[0], min_index = 0;
        /* code */
        for (i = 0; i < 8; i++)
        {
            if (arr[i] < min)
            {
                min = arr[i];
                min_index = i;
            }
        }
        newarr[j] = min;
        arr[min_index] = 999;
    }

    for (i = 0; i < 8; i++)
    {
        /* code */
        printf("%d ", newarr[i]);
    }

    return 0;
}
