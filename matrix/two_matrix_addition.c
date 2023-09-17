#include <stdio.h>

int main()
{
    /* code */
    int N, M;
    scanf("%d %d", &N, &M);
    int matrix[N][M], matrix2[N][M], matrix3[N][M];

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            scanf("%d", &matrix2[i][j]);
        }
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            matrix3[i][j] = matrix[i][j] + matrix2[i][j];
        }
    }
    printf("\n");
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            printf("%d ", matrix3[i][j]);
        }
        printf("\n");
    }

    return 0;
}
