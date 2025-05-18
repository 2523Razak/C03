#include <stdio.h>

int main() {
    int nombre, inverse = 0;  // inverse stockera le nombre inversé

    // On lit le nombre
    scanf("%d", &nombre);

    // Tant que le nombre n'est pas 0
    while (nombre != 0) {
        // On prend le dernier chiffre et on l'ajoute à inverse
        inverse = inverse * 10 + (nombre % 10);
        // On enlève le dernier chiffre du nombre
        nombre /= 10;
    }

    // On affiche le nombre inversé
    printf("Nombre inversé : %d\n", inverse);

    return 0;  // Fin du programme
}
