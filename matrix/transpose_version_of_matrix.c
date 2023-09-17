#include <stdio.h>

int main()
{
    /* code */
    int N, M;
    scanf("%d %d", &N, &M);
    int arr[N][M], arr1[M][N];

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            arr1[j][i]= arr[i][j];
        }
    }
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("%d ", arr1[i][j]);
        }
        printf("\n");
    }

    return 0;
}
