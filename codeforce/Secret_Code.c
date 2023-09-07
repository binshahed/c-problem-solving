#include <stdio.h>
#include <stdbool.h>

int main()
{
    int T;
    scanf("%d", &T);

    int N[T];

    for (int i = 0; i < T; i++)
    {
        scanf("%d", &N[i]);
    }

    for (int i = 0; i < T; i++)
    {
        int num = N[i];
        bool isPrime = true;

        if (num <= 1)
        {
            isPrime = false;
        }
        else
        {
            for (int j = 2; j * j <= num; j++)
            {
                if (num % j == 0)
                {
                    isPrime = false;
                    break;
                }
            }
        }

        if (isPrime)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }

    return 0;
}
