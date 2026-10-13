#include <stdio.h>

int main()
{
    int geheim = 7;
    int cheat_z = -1101;
    int zahl;
    int versuche = 0;

    printf("---Rate die geheime Zahl!---\n");
    printf("Du hast drei Versuche!\n");
    printf("Die Zahl liegt zwischen 1 und 10!\n");

    while (versuche < 3)
    {
        printf("Gib eine Zahl ein: ");
        scanf("%d", &zahl);

        versuche++;

        if (zahl == cheat_z)
        {
            printf("Gehackt! Die zahl ist %d!\n", geheim);
            break;
        }

        if (zahl == geheim)
        {
            printf("Ja genau! Die zahlen sind gleich gross!\n");
            break;
        }
        else if (zahl > geheim)
        {
            printf("Die Zahl ist zu gross!\n");
        }
        else
        {
            printf("Die Zahl ist zu klein!\n");
        }

        printf("Verbleibende Versuche: %d\n", 3 - versuche);
    }

    if (zahl != geheim && versuche == 3)
    {
        printf("Verloren! Zu viele Versuche! Die Zahl war %d!\n", geheim);
    }

    return 0;
}