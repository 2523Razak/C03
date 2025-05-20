#include <stdio.h>

int main() {
    int n, U, Up = 1, Upp = 0;
    
    scanf("%d", &n);  // Lecture de l'entrée
    
    if (n < 2) {
        printf("Erreur : n doit etre >= 2\n");
        return 1;  // Quitte le programme avec erreur
    } else {
        printf("%d %d ", Upp, Up);  // Affiche 0 et 1
        
        U = Upp + Up;
        while (U <= n) {
            printf("%d ", U);
            Upp = Up;
            Up = U;
            U = Upp + Up;
        }
    }
    
    return 0;
}
