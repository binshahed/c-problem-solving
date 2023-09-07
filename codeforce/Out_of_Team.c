#include <stdio.h>

int main()
{

    int N, K, result = 0;

    scanf("%d %d", &N, &K);

    int run[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &run[i]);
    }

    for (int i = 0; i < N; i++)
    {
        if (run[i] < K)
        {
            result = result + 1;
        }
    }

    printf("%d", result);

    return 0;
}
