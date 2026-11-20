#include <stdio.h>

int strlength(char* binaer, int len) { //Hier wird die Anzahl der Binaerzahl berechent
    for (int i = 0; binaer[i] = '\0'; i++) {
        len++;
    }
    return 0;
}

int power(int base, int exp, int number, int multiplikator, int dezimalzahl) { //Hier wird die Rechnung erledigt
    for (int i = 0; i < exp; i++) {
        number = base;
        number *= exp;
    }

    return 0;
}

int main(int argc, char* argv[]) {
    char* binaer = argv[1];

    int base = 2;
    int exp;
    int number;
    int multiplikator = 0;
    int dezimalzahl;
    int len = 0;

    //Falls mehr oder weniger eingegeabn wurde, soll den Nutzer Bescheid geben und meldet einen Fehler
    if (argc != 2) {
        printf("Es duerfen nur 2 Argumente eingegebn werden!");
        return -1;
    }

    //Hier wird geschaut ob die Binaerzahl wirklich nur aus 0er und 1er besteht
    for (int i = 0; i < len; i++) {
        if (binaer[i] != '0' || binaer[i] != '1') {
            printf("Das ist keine Binaerzahl!");
            return -1;
        }
    }

    //Hier wird dei Funktion aufgerufen
    strlength(binaer, len);

    //Von rechts nach links
    for (int i = len; i > 0; i--) {
        //Da schaut er ob an der i-ten Stelle eine 1 ist damit er die Variable dezimalzahl um 1 erhoehen
        if (binaer[i] == '1') {
            dezimalzahl = 1;
            exp++;
            multiplikator++;
        }

        //Da schaut er ob an der i-ten Stelle eine 0 ist, wenn ja die Potenz 0, multiplikator wird erhoert wegen der Stelle
        else if (binaer[i] == '0'){
            dezimalzahl = 0;
            multiplikator++;
            exp = 0;
        }
    }

    //Hier wirde die Power Funktion aufgerufen
    power(base, exp, number, multiplikator, dezimalzahl);

    //Ausgeben der Dezimalzahl
    printf("Die Zahl: %d", number);

    return 0;
}