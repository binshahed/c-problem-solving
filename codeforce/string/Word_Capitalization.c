#include <stdio.h>

int main()
{
    char word[100];
    fgets(word, sizeof(word), stdin);
    word[strcspn(word, "\n")] = '\0';

    if (word[0] >= 65 && word[0] <= 90)
    {
        puts(word);
    }
    else
    {
        word[0] -= 32;
        puts(word);
    }

    return 0;
}
