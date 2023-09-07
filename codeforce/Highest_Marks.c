#include <stdio.h>

int main()
{

    int N, H = 0;
    scanf("%d", &N);

    int marks[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &marks[i]);
    }

    for (int i = 0; i < N; i++)
    {
        if (marks[i] > H)
        {
            H = marks[i];
        }
    }

    for (int i = 0; i < N; i++)
    {
        int difference = H - marks[i];
        printf("%d ", difference);
    }

    return 0;
}