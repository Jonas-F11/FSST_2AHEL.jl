#include <stdio.h>

int main()
{
    const char secret[] = "OGSAFTLT";
    const int len = sizeof(secret) - 1;
    char guessed[sizeof(secret) - 1];
    char guess;

    //Variable initialisieren: _ _ _ _ _ _ _ _
    for (int i = 0; i < len; i++){
        guessed[i] = '_';
    }

    printf("Buchstabe: ");
    if (scanf(" %c", &guess) != 1)
    {
        printf("Ungültige Eingabe!\n");
        return 1;
    }

    int treffer = 0;
    for (int i = 0; i < (sizeof(secret) / sizeof(char)) - 1; i ++)
    {
        if ((secret[i]) == guess) {
            treffer++;
            guessed[i] = guess;
        }
    }

    for (int i = 0; i < len; i++){
        printf("%c ", guessed[i]);
    }

    printf("Treffer: %d!", treffer);

   
    return 0;
}