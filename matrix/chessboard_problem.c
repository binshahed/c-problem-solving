#include <stdio.h>

int main()
{
    /* code */
    int board[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            board[i][j] = 0;
        }
    }

    int rooks;
    scanf("%d", &rooks);

    for (int k = 0; k < rooks; k++)
    {
        int x, y;

        scanf("%d %d", &x, &y);
        board[x - 1][y - 1] = 1;
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (board[i][j] == 0)
            {
                printf("%d,%d ", i + 1, j + 1);
                printf("\n");
            }
        }
        }

    return 0;
}
