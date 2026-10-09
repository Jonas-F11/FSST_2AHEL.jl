#include <stdio.h>

int main()
{
    int a = 6;
    int b = 4;

    printf("Gib eine Zahl ein:\n");
    scanf("%d", &a);

    if(a == b)
    {
        printf("Die Zahlen ist gleich groß!\n");
    }

    else if(a > b)
    {
        printf("Die Zahl ist größer!\n");
    }

    else
    {
        printf("Die Zahl ist kleiner!\n");
    }

    return 0;
}