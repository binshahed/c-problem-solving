#include <stdio.h>

int main()
{
    char word[100];
    fgets(word, sizeof(word), stdin);
    word[strcspn(word, "\n")] = '\0';
    int vowels = 0, consonant = 0;

    for (int i = 0; word[i] != '\0'; i++)
    {
        if (word[i] == "a" || word[i] == "e" || word[i] == "i" || word[i] == "o" || word[i] == "u")
        {
            vowels++;
        }
        else
        {
            consonant++;
        }
    }

    printf("vowels: %d\nconsonent: %d", vowels, consonant);

    return 0;
}
