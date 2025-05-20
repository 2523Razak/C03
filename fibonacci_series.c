#include <stdio.h>

int main() {
    int limite;
    printf("Entrez la valeur limite : ");
    scanf("%d", &limite);

    int a = 0, b = 1;

    // Affiche les deux premiers termes (0 et 1) même si limite = 0
    printf("%d ", a);
    if (limite >= 1) {
        printf("%d ", b);
    }

    // Génère les termes suivants jusqu'à ne pas dépasser la limite
    while (a + b <= limite) {
        int suivant = a + b;
        printf("%d ", suivant);
        a = b;
        b = suivant;
    }

    printf("\n");
    return 0;
}
