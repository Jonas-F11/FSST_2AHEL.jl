#include <stdio.h>

// Schreibe eine Funktion len, die eine ganze Zahl
// zurückgibt und ein Wort als Parameter übergeben bekommt
// implementiere die Funktion so, dass sie die Anzahl der Buchstaben eines Wortes zurückgibt
// Alternative Formulierung: realisiere die Funktion so, dass sie ... 
int len(char* wort) {
    int laenge = 0;
    for (; wort[laenge] != '\0'; laenge++)
        ;    
    return laenge;

}

// Schreibe eine Funktion cmp, die eine ganze Zahl
// zurückgibt und zwei Wörter als Parameter übergeben bekommt
int cmp(char* wort1, char* wort2) {
    if (len(wort1) != len(wort2)) {
        return -1;
    }

    for (int i = 0; wort1[i] != '\0'; i++) {
        if (wort1[i] != wort2[i]) {
            return -1;
        }
    }
    return 0;
}

// Schreibe ein Programm...
int main(int argc, char* argv[]) {

    //... das zwei Wörter übergeben bekommt
    if (argc != 3) {
        return -1;
    }
    char* wort1 = argv[1];
    char* wort2 = argv[2];

    // rufe die Funktion cmp mit den Argumenten wort1 und wort2 auf
    // Alternative Formulierung: wende die Funktion cmp auf die Argumente wort1 und wort2 an
    // weise den Rückgabewert von cmp einer Variable mit dem Namen eq zu
    int eq = cmp(wort1, wort2);

    // Wenn eq 0 ist, soll das Programm
    // "Die Wörter sind gleich" ausgeben und 0 zurückgeben
    // sonst soll das Programm
    // "Die Wörter sind ungleich" ausgeben und -1 zurückgeben
    if (eq == 0) {
        printf("Die Wörter sind gleich!\n");
        return 0;
    } else {
        printf("Die Wörter sind ungleich!\n");
        return -1;
    }

    return 0;
}