#include <stdio.h>

int main(void)
{
    int aireDuCarre = 0;
    float prixReservation = 125.99;
    signed char nombre = 65;
    signed char nbascii = 'A'; // ASCII A = 65

    const float PI = 3.14; // const est une constante donc impossible de modif

    /* register int nombre2 = 5;  memoire register
    volatile int autreNombre = 10;  memoire RAM */

    aireDuCarre = 12;
    int nombre_entier = (int)prixReservation; // Conversion en entier

    /*
        %d : nombre entier (int)
        %f : nombre flottant (float)
        %c : caractère (char)
        %s : chaine de caratère (texte)
    */

    printf("Bonjour tout le monde ! :)\n");
    printf("Le nombre est %d ou %d.\n", nombre_entier, aireDuCarre);
    printf("Le prix est de %.2f euros.", prixReservation); // Les 2 premiers chiffres apres la ,
    
    return 0;
}
