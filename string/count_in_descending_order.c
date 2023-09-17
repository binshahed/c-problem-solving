#include <stdio.h>

int main()
{
    /* code */
    char S[100], K[100];
    fgets(S, sizeof(S), stdin);
    // S[strcspn(S, "\n")] = '\0';

    for (int i = 0; S[i] != '\0'; i++)
    {
        int prev = S[i];
        for (int j = 0; S[j] != '\0'; j++)
        {
            
        }
    }

    puts(K);

    return 0;
}
