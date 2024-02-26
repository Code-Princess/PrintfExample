#include<stdio.h>
int main(void){
    int x;
    float y;
    char a;
    char text[25] = "Programmieren ist toll!";
    int tag;
    int monat;
    int jahr;

    x = 50;
    y = 3.14;
    a = 'A';
    tag = 26;
    monat = 2;
    jahr = 2024;
 
    // Escape-Sequenzen
    printf("\nZeile\tEins");
    printf("\nZeile\tZwei");
    printf("\nZeile\tDrei");
    printf("\n\tEnde\n");
    printf("\nEin Backslash \\");
    printf("\nEin Anfuehrungszeichen \"\n\n");

    // Ausgabe von Variablenwerten mit Formatierungstypen
    printf("x: %d", x);
    printf("\ny: %f", y);
    printf("\na: %c", a);
    printf("\nMein Text: %s\n\n", text);
  
    // Ausgabe von mehreren Variablenwerten
    printf("x: %d\ny: %f\na: %c\nMein Text: %s\n\n", x, y, a, text);

    // Ausgabe von formatierten Integer-Werten
    printf("x: %10d", x);
    printf("\nDas heutige Datum ist: %d.%02d.%d", tag, monat, jahr);

    // Ausgabe von formatierten Float-Werten
    printf("\ny: %10.2f", y);

    return 0;
}