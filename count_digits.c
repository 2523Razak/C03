#include <stdio.h>

int main() {
    int nombre, original, count = 0;  // count compte le nombre de chiffres

    // On lit le nombre
    scanf("%d", &nombre);
    original = nombre;  // On garde une copie pour l'affichage final

    // Cas spécial : si le nombre est 0, il a 1 chiffre
    if (nombre == 0) {
        count = 1;
    } 
    else {
        // Tant que le nombre n'est pas 0, on le divise par 10 et on compte
        while (nombre != 0) {
            nombre /= 10;  // On enlève le dernier chiffre
            count++;  // On incrémente le compteur
        }
    }

    // On affiche le résultat
    printf("%d contient %d chiffre(s).\n", original, count);

    return 0;  // Fin du programme
}
