#include <stdio.h>

int main() {
    int limite, a = 0, b = 1, c;  // a et b sont les 2 premiers termes de Fibonacci

    // On lit la limite jusqu'où afficher la série
    scanf("%d", &limite);

    // On affiche les 2 premiers termes (0 et 1)
    printf("%d %d ", a, b);

    // On calcule le terme suivant
    c = a + b;

    // Tant que le terme suivant ne dépasse pas la limite
    while (c <= limite) {
        printf("%d ", c);  // On affiche le terme
        a = b;  // On met à jour les variables pour le prochain terme
        b = c;
        c = a + b;
    }

    return 0;  // Fin du programme
}
