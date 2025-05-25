#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);  // Lecture de la limite
    
    int a = 0, b = 1; // Initialisation des termes
    printf("%d", a);   // Affiche toujours U0=0
    
    // Affiche les termes <= n avec espace avant (sauf premier)
    while (b <= n) {
        printf(" %d", b);
        int suivant = a + b;
        a = b;
        b = suivant;
    }
    
    return 0;
}
