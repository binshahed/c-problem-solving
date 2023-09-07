#include <stdio.h>
#include <stdbool.h>

int main()
{
    int NE;
    scanf("%d", &NE);
    int arr[NE], terget;
    bool result = false;

    for (int i = 0; i < NE; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\n enter terget value:");
    scanf("%d", &terget);

    for (int j = 0; j < NE; j++)
    {
        for (int k = j + 1; k < NE; k++)
        {
            if (!result)
            {
                if (arr[j] + arr[k] == terget)
                {
                    result = true;
                }
            }
        }

        if (result)
        {
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