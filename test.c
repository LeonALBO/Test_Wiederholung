#include <stdio.h>

int strlength(char* binaer) { //Hier wird die Anzahl der Binaerzahl berechent
    int len = 0;
    for (int i = 0; binaer[i] = '\0'; i++) {
        len++;
    }
    return 0;
}

int power(int base, int exp) {


    number = power(base, exp);
    
    return 0;
}

int main(int argc, char* argv[]) {
    char* binaer = argv[1];
    int dezimalzahl = 0;

    int number = 0;
    int base = 2;
    int exp;

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
    strlength(binaer);

    //Von rechts nach links den Code in 4 Zahlen teilen
    len = n;
    for (int i = n; n > 0; n--;) {
        //Da schaut er ob an der i-ten Stelle eine 1 ist damit er die Variable dezimalzahl um 1 erhoehen
        if (binaer[i] == '1') {
            dezimalzahl++;
            exp++;
        }

        else if (binaer[i] == '0'){
            dezimalzahl = 0;
        }
    }

    //Hier wirde die Power Funktion aufgerufen
    power(base, exp);

    //Ausgeben der Dezimalzahl
    printf("Die Zahl: %d", number);

    return 0;
}