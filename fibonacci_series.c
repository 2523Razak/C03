#include <stdio.h>

int main() {
    int n, a = 0, b = 1, suivant;
    scanf("%d", &n); // Saisie de l'utilisateur (ex: 20)

    // Affiche les deux premiers termes (0 et 1)
    printf("%d %d ", a, b);

    // Génère les (n - 2) termes suivants
    for (int i = 2; i < n; i++) {
        suivant = a + b;
        printf("%d ", suivant);
        a = b;
        b = suivant;
    }

    return 0;
}
