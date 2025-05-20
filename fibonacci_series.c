#include <stdio.h>

int main() {
    int n, i, U, Up, Upp;
    
    // Partie saisie (identique à votre image)
    do {
        
        scanf("%d", &n);
    } while (n < 2);

    // Initialisation (identique)
    Upp = 0;
    Up = 1;

    // Affichage compact U0 et U1 (seule modification)
    printf("%d %d ", Upp, Up);

    // Boucle de calcul (identique)
    for (i = 2; i <= n; i++) {
        U = Upp + Up;
        printf("%d ", U);  // Affichage compact
        Upp = Up;
        Up = U;
    }

    return 0;
}
