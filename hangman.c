#include <stdio.h>

int strcmp(const char word1[], char word2[]) {
    int i = 0;
    while (word1[i] != '\0') {
        if (word1[i] != word2[i]) {
            return 0;
        }
        i++;
    }
    return 1;
}

int strcmp2(const char word1[], char word2[]) {
    int diff = 0;
    for (int i = 0; word1[i] != '\0' && !diff; diff |= word1[i] != word2[i], i++) 
        ;
    return !diff;
}

int countHits(const char secret[], const char guess, int len) {
    int treffer = 0;
    for (int i = 0; i < len; i ++) {
        if (secret[i] == guess) {
            treffer++;
        }
    }
    return treffer;
}

int main()
{
    const char secret[] = "OGSAFTLT";
    const int len = sizeof(secret) - 1;
    char guessed[sizeof(secret) - 1];
    char guess;

    // Variable initialisieren: _ _ _ _ _ _ _ _
    for (int i = 0; i < len; i++) {
        guessed[i] = '_';
    }

    int fails = 0;
    while (fails < 5) {    
        printf("Buchstabe: ");
        if (scanf(" %c", &guess) != 1)
        {
            printf("Ungültige Eingabe!\n");
            return 1;
        }

        int treffer = countHits(secret, guess, len);
        printf("Treffer: %d!\n", treffer);

        fails += (treffer == 0);
    }   
    return 0;
}