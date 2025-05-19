#include <stdio.h>

int main() {
    int limite, terme1 = 0, terme2 = 1, termeSuivant;

    // Lire la limite
    scanf("%d", &limite);

    // Cas spécial : si la limite est négative, on ne fait rien
    if (limite < 0) {
        return 0;  // Fin du programme
    }

    // Afficher les 2 premiers termes (0 et 1)
    printf("%d %d ", terme1, terme2);

    // Calculer et afficher les termes suivants ≤ limite
    termeSuivant = terme1 + terme2;
    while (termeSuivant <= limite) {
        printf("%d ", termeSuivant);
        terme1 = terme2;
        terme2 = termeSuivant;
        termeSuivant = terme1 + terme2;
    }

    return 0;
}
