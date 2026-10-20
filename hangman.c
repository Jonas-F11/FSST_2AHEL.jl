#include <stdio.h>

int main()
{
    const char secret = 'j';
    const char guess = 'k';

    if (guess == secret)
    {
        printf("Treffer %c!\n", secret);
    } else 
    {
        printf("%c ist Falsch!\n", guess);
    }
    return 0;
}