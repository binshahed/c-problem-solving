#include <stdio.h>

int main()
{
    int T;
    char P;
    scanf("%d", &T);
    int X[T];

    for (int i = 0; i < T; i++)
    {
        scanf("%d%c", &X[i], &P);
    }

    for (int i = 0; i < T; i++)
    {
        int diff = 0, baseNum = X[i];

        if (baseNum < 60)
        {

            diff = 60 - X[i];
            X[i] = diff + X[i];
            printf("nnn1 %d \n", X[i]);
        }
        if (baseNum < 80)
        {

            int diff1 = (80 - X[i]);
            X[i] = diff + (diff1 * 2);
            diff = diff1;
            printf("nnn2 %d \n", X[i]);
        }
        if (baseNum < 100)
        {
            int diff2;
            if ( X[i] == 100)
            {
                // int diff2 = (100 - X[i]);
                printf("nnn3 %d \n", X[i]);
                X[i] = diff + (20 * 3);
                diff = 0;
                printf("nnn3 %d \n", X[i]);
            }
            else
            {
                printf("nnn3el %d \n", X[i]);
                int diff2 = (100 - X[i]);
                X[i] = diff + (diff2 * 3);
                diff = 0;
                printf("nnn3el %d \n", X[i]);
            }
        }
    }

    for (int i = 0; i < T; i++)
    {
        printf("%d minutes\n", X[i]);
    }

    return 0;
}