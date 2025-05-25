#include <stdio.h>

// Ce script permet d'afficher la série de Fibonacci jusqu'à une valeur limite donnée

int main() {
    // Initialisation des variables
    int limite;
    int a = 0, b = 1, suivant;

    // Récupération de la valeur entrée par l'utilisateur
    scanf("%d", &limite);

    // Affichage de la première valeur
    printf("Fibonacci : %d ", a);

    // Boucle et conditions pour vérifier la logique de Fibonacci et afficher les valeurs
    while (b <= limite) {
        printf("%d ", b);
        suivant = a + b;
        a = b;
        b = suivant;
    }
    printf("\n");

    return 0;
}
