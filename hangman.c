#include <stdio.h>

int main()
{
    const char secret = 'j';
    char guess;

    printf("Buchstabe: ");
    if (scanf(" %c", &guess) != 1)
    {
        printf("Ungültige Eingabe!\n");
        return 1;
    }

    if (guess == secret)
    {
        printf("Treffer %c!\n", secret);
    } else 
    {
        printf("%c ist Falsch!\n", guess);
    }
    return 0;
}