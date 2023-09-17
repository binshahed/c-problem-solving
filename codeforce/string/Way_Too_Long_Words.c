

#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);

    // Consume the newline character after reading n
    getchar();

    char word[101];

    for (int i = 0; i < n; i++) {
        // Read a line (word) using fgets
        fgets(word, sizeof(word), stdin);

        // Remove the trailing newline character
        word[strcspn(word, "\n")] = '\0';

        // Check if the word is too long
        if (strlen(word) > 10) {
            printf("%c%d%c\n", word[0], (int)strlen(word) - 2, word[strlen(word) - 1]);
        } else {
            printf("%s\n", word);
        }
    }

    return 0;
}
