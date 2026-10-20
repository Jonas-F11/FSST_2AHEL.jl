#include <stdio.h>

int main()
{
    const char secret[] = "OGSAFTLT";
    char guess;

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
        }
    }

    printf("Treffer: %d!", treffer);

   
    return 0;
}