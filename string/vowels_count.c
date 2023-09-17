#include <stdio.h>

int main()
{
    /* code */
    char sen[100];

    fgets(sen, sizeof(sen), stdin);

    int i = 0, counter = 0;
    while (sen[i] != '\0')
    {
        /* code */
        if (sen[i] == 'a' || sen[i] == 'e' || sen[i] == 'i' || sen[i] == 'o' || sen[i] == 'u')
        {
            counter++;
        }

        i++;
    }
    printf("%d", counter);

    return 0;
}
