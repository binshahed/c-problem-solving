#include <stdio.h>

int main()
{

    int T, S, A, B, C, R;

    scanf("%d", &T);
    int res[T];

    for (int i = 1; i <= T; i++)
    {
        scanf("%d %d %d %d", &S, &A, &B, &C);

        R = S - (A + B + C);
        res[i - 1] = R;
    }

    for (int i = 0; i < T; i++)
    {
        printf("%d\n",res[i]);
    }
    

    return 0;
}