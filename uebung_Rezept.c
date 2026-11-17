#include <stdio.h>

int main(int argc, char* argv[]) {
    if (argc == 1) {   // Benutzer hat keine Parameter übergeben
        // TODO: irgendwas mit Rezepten
    } else if (argc == 4) {
        char *menge = argv[1];
        char *palt = argv[2];
        char *pneu = argv[3];
        printf("Fuer %d Personen: %d -> fuer %d Personen: %d", 100, 4, 10, umrechnen(100, 4, 10));
    } else {
        printf("Usage: Rezepte <menge> <personenanzahl_alt> <personenanzahl_neu>");
        return -1;
    }
}
