#include <stdio.h>
#include <string.h>

int main()
{
    char S[100];
    fgets(S, sizeof(S), stdin);
    S[strcspn(S, "\n")] = '\0';

    int l = (strlen(S)), res = 1;

    for (int i = 0; i < l / 2; i++)
    {

        if (S[i] != S[(l - 1) - i])
        {
            res = 0;
        }
    }

    if (res == 1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}
